#ifndef SPELL_CHECKER_H
#define SPELL_CHECKER_H

#include <QSet>
#include <QString>
#include <fstream>
#include <string>

class spell_checker {
public:
    bool load_words(const std::string& path)
    {
        std::ifstream file(path);

        if (!file.is_open()) {
            return false;
        }

        std::string word;

        while (file >> word) {
            words.insert(QString::fromStdString(word));
        }

        return true;
    }

    bool is_correct(const QString& word) const
    {
        return words.contains(word.toLower());
    }

private:
    QSet<QString> words;
};

#endif