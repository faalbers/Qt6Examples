#ifndef __THREADDIALOG__
#define __THREADDIALOG__

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include "Thread.hpp"

class ThreadDialog : public QDialog
{
    Q_OBJECT
public:
    ThreadDialog(QWidget *parent = 0);
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void startOrStopThreadA();
    void startOrStopThreadB();
private:
    Thread      threadA;
    Thread      threadB;
    QPushButton *threadAButton;
    QPushButton *threadBButton;
    QPushButton *quitButton;
};

#endif
