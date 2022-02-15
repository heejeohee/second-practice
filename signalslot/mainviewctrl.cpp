#include "mainviewctrl.h"
#include <QQmlApplicationEngine>
#include <QQmlContext>

MainViewctrl::MainViewctrl() : QObject(), m_NumValue(0)
{
    m_pMainView = new MainView();

    m_pMainView->engine()->rootContext()->setContextProperty("JH", this);
    m_pMainView->setSource(QUrl(QStringLiteral("qrc:/main.qml")));
}
MainView* MainViewctrl::getViewPtr(){
    return m_pMainView;
}
int MainViewctrl::getnum()const{
    qDebug()<<"[1] called getnum()";
    return m_NumValue;
}
void MainViewctrl::setnum(const int &gn){
    qDebug()<<"[2] called setnum()";
    m_NumValue = gn;
    emit numChanged();
}
