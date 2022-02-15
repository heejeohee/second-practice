#ifndef MAINVIEWCTRL_H
#define MAINVIEWCTRL_H
#include <QObject>
#include "mainview.h"

class MainViewctrl : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int num READ getnum WRITE setnum NOTIFY numChanged)
public:
    MainViewctrl();
    MainView* getViewPtr();

    int getnum() const;
    void setnum(const int &);
private:
    MainView *m_pMainView;
    int m_NumValue;
signals:
    void numChanged();
};

#endif // MAINVIEWCTRL_H
