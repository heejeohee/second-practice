#ifndef MAINVIEW_H
#define MAINVIEW_H
#include <QGuiApplication>
#include <QQuickView>
#include <QObject>
#include <QDebug>

class Mainview : public QQuickView{
Q_OBJECT
public:
    Mainview();
    Q_INVOKABLE void testfunc(int);
};
#endif // SIGNALTEST_H
