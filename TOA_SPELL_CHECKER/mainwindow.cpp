#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <vector>
#include <QString>
#include <iostream>
#include <QtConcurrent/QtConcurrent>
#include <QFileDialog>

using namespace std;

// main function

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->pushButton->hide();
    //connect(ui->textEdit, &QTextEdit::textChanged, this, &MainWindow::updateListWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::updateListWidget() {

    QString pattern = ui->textEdit->toPlainText();


    QStringList mis_matchedWords = Spell_Checker();

    ui->listWidget->clear();

    if (!mis_matchedWords.empty()) {
        ui->listWidget->addItems(mis_matchedWords);
    }
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

QStringList MainWindow::Spell_Checker()
{
    QStringList misMatched;
    QString paragraph = ui->textEdit->toPlainText();

    QStringList tokens = paragraph.split(QRegularExpression("\\W+"), Qt::SkipEmptyParts);
    QVector<QString> wordVector;

    foreach(const QString &token, tokens)
    {
        wordVector.append(token);
    }

    qDebug() << "Words in the QVector:";
    for(int i = 0; i < wordVector.size(); ++i)
    {
        qDebug() << wordVector.at(i);
    }

    for(auto &parse : wordVector)
    {
        bool flag;
        for(int i = 0; i < word_list.size(); i++)
        {
            flag = false;
            if(parse == word_list[i])
            {
                flag = true;
                break;
            }

        }
        if(!flag)
        {
            misMatched.append(parse);
        }
    }


    return misMatched;
}

void MainWindow::on_pushButton_clicked()
{
//    QString str = ui->textEdit->toPlainText();
//    QString filePath = "spelling_database.txt";
//    QFile File2("HELLO.txt");;
//    File2.open(QIODevice::WriteOnly | QIODevice::Text);
//    File2.close();
//    QVector<QString> words = readSpellingDatabase(filePath);

//    QStringList searched_wordsp;
//    QString pattern = ui->textEdit->toPlainText();
//    QVector<QString> matchedWords = greedySearch(pattern, words);

//    if (!matchedWords.empty()) {
//        qDebug() << "Matched words:" ;
//        for (const QString& word : matchedWords) {
//            searched_wordsp.append(word);
//        }
//    } else {
//        qDebug() << "No matches found." ;
//    }

//    ui->listWidget->clear(); // Clear previous items
//    ui->listWidget->addItems(searched_wordsp);
    updateListWidget();
}




void MainWindow::on_pushButton_2_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select Dictionary File"), "", tr("txt files (*.txt)"));

    word_list = readSpellingDatabase(fileName);
    list_of_words = loadDictionaryWords(fileName);
    ui->listWidget_2->addItems(list_of_words);
}

