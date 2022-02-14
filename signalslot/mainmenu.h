#ifndef MAINMENU_H
#define MAINMENU_H
#include <QGuiApplication>
#include <mainview.h>
#include <QQuickItem>
#include<QObject>

class mainmenu : public QGuiApplication
{
public:
    mainmenu(int &, char **);
    void init();
    void showqml();
    Mainview *m_pQuickview;
};

#endif // MAINMENU_H
