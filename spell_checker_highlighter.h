#ifndef SPELL_CHECKER_HIGHLIGHTER_H
#define SPELL_CHECKER_HIGHLIGHTER_H

#include "spell_checker.h"

#include <QRegularExpression>
#include <QSyntaxHighlighter>
#include <QTextCharFormat>

class spell_checker_highlighter : public QSyntaxHighlighter {
public:
    spell_checker_highlighter(QTextDocument* parent, spell_checker* checker)
            : QSyntaxHighlighter(parent)
            , checker(checker)
    {
        misspelled_format.setUnderlineColor(Qt::red);
        misspelled_format.setUnderlineStyle(QTextCharFormat::SpellCheckUnderline);
    }

protected:
    void highlightBlock(const QString& text) override
    {
        QRegularExpression word_regex("\\b[A-Za-z]+\\b");

        auto iterator = word_regex.globalMatch(text);

        while (iterator.hasNext()) {
            auto match = iterator.next();

            QString word = match.captured();

            if (!checker->is_correct(word)) {
                setFormat(match.capturedStart(),
                          match.capturedLength(),
                          misspelled_format);
            }
        }
    }

private:
    spell_checker* checker;
    QTextCharFormat misspelled_format;
};

#endif