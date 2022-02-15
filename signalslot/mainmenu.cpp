#include "mainmenu.h"

mainmenu::mainmenu(int &argc, char *argv[]) : QGuiApplication(argc, argv)
{
    init();
    showqml();
}
void mainmenu::init(){

   qmlRegisterType<Mainview>("hello", 1, 0, "Mainview");
    m_pQuickview = new Mainview();

    m_pQuickview->setSource(QUrl(QStringLiteral("qrc:/main.qml")));
}
void mainmenu::showqml(){
    m_pQuickview->show();
}
