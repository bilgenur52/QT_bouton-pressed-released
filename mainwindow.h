#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QMainWindow>
#include <QPushButton>

#include <QHBoxLayout>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
     // QPushButton *B0 = new QPushButton("bjr bilge");
        QPushButton *B0;
    ~MainWindow();
public slots:
  void boutonpress();
  void boutonrelease();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
