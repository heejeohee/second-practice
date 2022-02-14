#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<mainmenu.h>
#include<mainview.h>

int main(int argc, char *argv[])
{
    mainmenu app(argc, argv);
    return app.exec();
}
