#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <qt6/QtCore/qobject.h>

class MainWindow : public QMainWindow 
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLabel *imageLabel = nullptr;
};

#endif // MAINWINDOW_H
