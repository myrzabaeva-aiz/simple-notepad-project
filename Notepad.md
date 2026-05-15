# Notepad Project Documentation

## Overview

This project is a desktop notepad application developed using C++ and Qt6 for the Object-Oriented Programming course at AUCA.

The application extends a basic notepad into a richer WordPad-like editor with text formatting, spell checking, file operations, and additional optional features.

---

# Required Features

## Exception Handling

The project uses a custom exception hierarchy implemented in `notepad_exception.h`.

Implemented exceptions:
- `notepad_exception`
- `file_not_found_exception`
- `file_read_exception`
- `file_write_exception`

The exceptions are used inside file operations such as opening and saving files. Errors are displayed using `QMessageBox::critical`.

---

## Spell Checker

The spell checker loads words from `data/words.txt` into a word dictionary.

Features:
- Real-time spell checking
- Red underline highlighting for misspelled words
- Word suggestions in the context menu
- Tools → Check Spelling action

The spell checker uses a custom `QSyntaxHighlighter` subclass implemented in `spell_checker_highlighter.h`.

---

# Optional Features

## 1. Font Dialog

Implemented using `QFontDialog`.

Users can:
- change font family
- change font size
- apply fonts to selected text

---

## 2. Text Color Picker

Implemented using `QColorDialog`.

Users can change the text color of selected text inside the editor.

---

## 3. Zoom In / Zoom Out

Implemented with:
- Zoom In
- Zoom Out
- Reset Zoom

Keyboard shortcuts:
- Ctrl++
- Ctrl+-
- Ctrl+0

---

# Additional Features

## Status Bar

The status bar displays:
- word count
- character count

The values update automatically while typing.

---

# OOP Concepts Used

## Encapsulation

The `main_window` class encapsulates the editor UI and logic.

---

## Composition

The project uses composition with Qt classes such as:
- QTextEdit
- QToolBar
- QMenuBar
- QStatusBar

---

## Inheritance

The spell checker highlighter inherits from `QSyntaxHighlighter`.

---

## Abstraction

Complex editor functionality is separated into helper classes and functions.

---

# Project Structure

```text
main.cpp
    Application entry point

main_window.h / main_window.cpp
    Main editor window and application logic

spell_checker.h
    Dictionary management

spell_checker_highlighter.h
    Spell checking and highlighting

text_transform.h
    Text transformation utilities

notepad_exception.h
    Exception hierarchy
```
# Technologies Used

- C++
- Qt6
- Object-Oriented Programming
- Qt Widgets
- CMake

---

# Conclusion

This project demonstrates the use of object-oriented programming principles together with Qt GUI development to create a functional desktop text editor application.