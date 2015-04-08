#ifndef IPMAINWINDOW_H
#define IPMAINWINDOW_H



#include <QMainWindow>
class QAction;
class QLabel;
class QMenu;
class QScrollArea;
class QScrollBar;



namespace Ui {
    class IpMainWindow;
}



class IpMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit IpMainWindow( QWidget *parent = 0 );
    bool loadFile( const QString& filename );

private slots:
    void open();
    void print();
    void zoomIn();
    void zoomOut();
    void normalSize();
    void fitToWindow();
    void about();

private:
    void createActions();
    void createMenus();
    void updateActions();
    void scaleImage( double factor );
    void adjustScrollBar( QScrollBar* scrollBar, double factor );

    Ui::IpMainWindow *ui;

    QLabel* imageLabel;
    QScrollArea* scrollArea;
    double scaleFactor;

    QAction* openAct;
    QAction* printAct;
    QAction* exitAct;
    QAction* zoomInAct;
    QAction* zoomOutAct;
    QAction* normalSizeAct;
    QAction* fitToWindowAct;
    QAction* aboutAct;
    QAction* aboutQtAct;

    QMenu* fileMenu;
    QMenu* viewMenu;
    QMenu* helpMenu;
};



#endif // IPMAINWINDOW_H
