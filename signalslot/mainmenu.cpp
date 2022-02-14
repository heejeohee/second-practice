#include "mainmenu.h"

mainmenu::mainmenu(int &argc, char *argv[]) : QGuiApplication(argc, argv)
{
    init();
    showqml();
}
void mainmenu::init(){

    m_pQuickview = new Mainview();
    m_pQuickview->setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    QObject *item = m_pQuickview->rootObject();

    QObject::connect(item, SIGNAL(qmlsignal(int)),m_pQuickview,SLOT(qmlslot(int)));
}
void mainmenu::showqml(){
    m_pQuickview->show();
}
