#include "IpMainWindow.h"
#include "ui_IpMainWindow.h"



IpMainWindow::IpMainWindow( QWidget *parent ) :
    QMainWindow( parent ),
    ui( new Ui::IpMainWindow )
{
    ui->setupUi( this );
}



IpMainWindow::~IpMainWindow()
{
    delete ui;
}
