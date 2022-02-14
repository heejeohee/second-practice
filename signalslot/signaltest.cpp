#include "signaltest.h"

signaltest::signaltest(int &argc, char **argv):QGuiApplication(argc, argv)
{
    initView();
    showSetup();
}
void signaltest :: initView(){
    m_pView = new QQuickView();
    m_pView->setSource(QUrl(QStringLiteral("qrc:/main.qml")));
}
void signaltest :: showSetup(){
    m_pView->show();
}
