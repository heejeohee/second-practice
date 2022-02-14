#ifndef MAINVIEW_H
#define MAINVIEW_H
#include <QGuiApplication>
#include <QQuickView>
#include <QObject>

class Mainview : public QQuickView{
Q_OBJECT
public:
    Mainview();
//    Q_INVOKABLE void testfunc();
public slots:
    void qmlslot(int getnum);
};
#endif // SIGNALTEST_H
