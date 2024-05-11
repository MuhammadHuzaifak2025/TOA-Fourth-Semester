#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <vector>
#include <QString>
#include <iostream>
#include <regex>

using namespace std;


void Solve_regex() {
    // Your function definition
}

vector<QString> readSpellingDatabase(const QString& filePath) {
    qDebug() << filePath;
    vector<QString> words;
    QFile file(filePath); // Create QFile object
    if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&file);
        QString word;

        while (!in.atEnd()) {
            word = in.readLine();
            words.push_back(word);
        }

        file.close();
    } else {
        qDebug() << "Failed to open file for reading.";
    }

    return words;
}

vector<QString> greedySearch(const QString& regexPattern, const vector<QString>& words) {
    vector<QString> matchedWords;
    QString patternStr = regexPattern;

    size_t pos = 0;
    while ((pos = patternStr.indexOf("*", pos)) != -1) {
        patternStr.replace(pos, 1, ".*");
        pos += 2;
    }

    pos = 0;
    while ((pos = patternStr.indexOf("?", pos)) != -1) {
        patternStr.replace(pos, 1, ".");
        pos += 1;
    }

    regex pattern(patternStr.toStdString());

    for (const QString& word : words) {
        if (regex_search(word.toStdString(), pattern)) {
            matchedWords.push_back(word);
        }
    }

    return matchedWords;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString filePath = "spelling_database.txt";
    QFile File2("HELLO.txt");;
    File2.open(QIODevice::WriteOnly | QIODevice::Text);
    File2.close();
    vector<QString> words = readSpellingDatabase(filePath);

    QString pattern = ui->textEdit->toPlainText();

    vector<QString> matchedWords = greedySearch(pattern, words);

    if (!matchedWords.empty()) {
        qDebug() << "Matched words:" ;
        for (const QString& word : matchedWords) {
            qDebug() << word.toStdString() ;
        }
    } else {
        qDebug() << "No matches found." ;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
