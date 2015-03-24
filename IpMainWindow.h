#ifndef IPMAINWINDOW_H
#define IPMAINWINDOW_H



#include <QMainWindow>



namespace Ui {
    class IpMainWindow;
}



class IpMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit IpMainWindow( QWidget *parent = 0 );
    ~IpMainWindow();

private:
    Ui::IpMainWindow *ui;
};



#endif // IPMAINWINDOW_H
