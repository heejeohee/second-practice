#include "mainmenu.h"

MainMenu::MainMenu(int &argc, char *argv[]) : QGuiApplication(argc, argv)
{
    init();
    showqml();
}
void MainMenu::init(){
    m_pMainViewctral = new MainViewctrl();
}
void MainMenu::showqml(){
    m_pMainViewctral->getViewPtr()->show();
}
