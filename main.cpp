#include "mainwindow.h"
#include <QApplication>
#include <QSettings>
void setupSettings();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Application name and organization.
    QCoreApplication::setOrganizationName("Breath");
    QCoreApplication::setOrganizationDomain("Breathsoft.tk");
    QCoreApplication::setApplicationName("Breath Canvas");
    setupSettings();
    //Starting main window.
    MainWindow w;
    w.showMaximized();

    return a.exec();
}
void setupSettings() {
    QSettings settings;
    settings.setValue("drawing/gridSize",10);
    settings.setValue("drawing/hanleSize",15);
    settings.setValue("drawing/gridEnabled",false);
}
