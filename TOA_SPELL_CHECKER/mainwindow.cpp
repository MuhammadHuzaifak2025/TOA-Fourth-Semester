#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <vector>
#include <QString>
#include <iostream>
#include <QtConcurrent/QtConcurrent>


using namespace std;

// main function

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->hide();
    connect(ui->textEdit, &QTextEdit::textChanged, this, &MainWindow::updateListWidget);

    word_list = readSpellingDatabase("spelling_database.txt");
    QStringList list_of_words = loadDictionaryWords("spelling_database.txt");
    ui->listWidget_2->addItems(list_of_words);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::updateListWidget() {

    QString pattern = ui->textEdit->toPlainText();


    QVector<QString> matchedWords = greedySearch(pattern, word_list);

    ui->listWidget->clear();


    if (!matchedWords.empty()) {
        for (const QString& word : matchedWords) {
            ui->listWidget->addItem(word);
        }
    }
}


void Solve_regex() {
    // Your function definition
}

QStringList MainWindow::loadDictionaryWords(const QString& filePath) {
    qDebug() << filePath;
    QStringList words;
    QFile file(filePath); // Create QFile object
    if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&file);
        QString word;

        while (!in.atEnd()) {
            word = in.readLine();
            words.append(word);
        }

        file.close();
    } else {
        qDebug() << "Failed to open file for reading.";
    }

    return words;
}

QVector<QString> MainWindow::readSpellingDatabase(const QString& filePath) {
    qDebug() << filePath;
    QVector<QString> words;
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

QVector<QString> MainWindow::greedySearch(const QString& regexPattern, const QVector<QString>& words) {
    QVector<QString> matchedWords;
    QString patternStr = regexPattern;

//    patternStr.replace("*", ".*").replace("?", ".");

    QRegularExpression pattern(patternStr);

    for (const QString& word : words) {
        if (pattern.match(word).hasMatch()) {
            matchedWords.push_back(word);
        }
    }

    return matchedWords;
}

void MainWindow::on_pushButton_clicked()
{
//    QString str = ui->textEdit->toPlainText();
    QString filePath = "spelling_database.txt";
    QFile File2("HELLO.txt");;
    File2.open(QIODevice::WriteOnly | QIODevice::Text);
    File2.close();
    QVector<QString> words = readSpellingDatabase(filePath);

    QStringList searched_wordsp;
    QString pattern = ui->textEdit->toPlainText();

    QVector<QString> matchedWords = greedySearch(pattern, words);

    if (!matchedWords.empty()) {
        qDebug() << "Matched words:" ;
        for (const QString& word : matchedWords) {
            searched_wordsp.append(word);
        }
    } else {
        qDebug() << "No matches found." ;
    }

    ui->listWidget->clear(); // Clear previous items
    ui->listWidget->addItems(searched_wordsp);
}



