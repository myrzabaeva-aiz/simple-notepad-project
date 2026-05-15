# Simple Notepad Project

A desktop notepad application built with C++ and Qt6 for the Object-Oriented Programming course at AUCA.

## Features

### Basic Features
- Open text files
- Save files
- Save files as
- Text editing
- Font customization
- Bold, italic, and underline formatting
- Text transformations
- Find and replace dialog
- Word frequency analysis
- Status bar with word and character counter

### Optional Features
- Spell checker with highlighting
- Font color picker
- Zoom in / zoom out support

## Technologies
- C++
- Qt6
- Object-Oriented Programming (OOP)
- Qt Widgets

## Project Structure

```text
simple-notepad-project
├── data
│   ├── words.txt
│   └── images
│       ├── bold.svg
│       ├── italic.svg
│       └── underline.svg
├── main.cpp
├── main_window.cpp
├── main_window.h
├── text_transform.h
├── spell_checker.h
├── spell_checker_highlighter.h
├── sort.h
├── notepad_exception.h
├── find_replace_dialog.ui
├── word_frequency_dialog.ui
├── CMakeLists.txt
└── README.md