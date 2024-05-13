#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpression>
#include <regex>
#include <vector>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    bool regexMatch(const QString& pattern, const QString& word);
    QVector<QString> greedySearch(const QString& regexPattern, const QVector<QString>& words);
    QVector<QString> readSpellingDatabase(const QString& filePath);
    QStringList loadDictionaryWords(const QString& filePath);
    void updateListWidgetOnMainThread(const QVector<QString>& matchedWords);
    void performPatternMatching(const QString& pattern);
    void generatePattern();
    void generateRegexPattern();
    void checkSpelling();

    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void updateListWidget();

private:
    Ui::MainWindow *ui;
    QVector<QString> word_list;

};
#endif // MAINWINDOW_H
