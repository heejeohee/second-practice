#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<signaltest.h>

int main(int argc, char *argv[])
{
    signaltest app(argc, argv);
//    QGuiApplication app(argc, argv);
//    QQmlApplicationEngine engine;
//    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
//    if (engine.rootObjects().isEmpty())
//        return -1;

    return app.exec();
}
