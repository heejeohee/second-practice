#ifndef SIGNALTEST_H
#define SIGNALTEST_H
#include <QGuiApplication>
#include <QQuickView>

class signaltest : public QGuiApplication   //출력부분을 담당하기 위함 : public QGuiApplication
{
public:
    signaltest(int &, char **);
private:
    void initView();
    void showSetup();
    QQuickView *m_pView;
};

#endif // SIGNALTEST_H
