#ifndef MAINMENU_H
#define MAINMENU_H
#include <QGuiApplication>
#include <QQuickItem>
#include "mainviewctrl.h"

class MainMenu : public QGuiApplication
{
public:
    MainMenu(int &, char **);
    MainViewctrl* m_pMainViewctral;
    void init();
    void showqml();
};

#endif // MAINMENU_H
