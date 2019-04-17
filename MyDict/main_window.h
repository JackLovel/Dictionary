#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QtWidgets>

#include "dict.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QWidget *widget;
    QVBoxLayout *layout;
    QHBoxLayout *searchLayout;
    QHBoxLayout *pronLayout;
    QPushButton *button;
    QLineEdit *edit;
    QLabel *nameLabel;
    QLabel *ukPron;
    QLabel *usPron;
    QLabel *infoLabel;

    Dict *dict;

    void initUI();

private slots:
    void receiveQueryWord(QString name, QString ukPron, QString usPron, QString chinese, QString ukAudio, QString usAudio, QString message);

    void on_button_clicked();
};

#endif // MAINWINDOW_H
