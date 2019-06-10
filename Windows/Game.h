#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <vector>

#include <QMainWindow>
#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsView>

#include "MyPlayer.h"
#include "WindowManager.h"
#include "CursorManager.h"

#include "Graphics\CustomButton.h"
#include "Graphics\TextButton.h"
#include "VeryComplicatedButton.h"
#include "TwinButtons.h"
#include "Graphics/VisitorFace.h"
#include "Logic/ItemLockable.h"
#include "Windows/SubWindow.h"

using std::vector;

class Game : public QGraphicsView
{
    Q_OBJECT
    vector<ItemLockable*> contents;
public:
    explicit Game(QWidget *parent = nullptr);

    QGraphicsScene *scene;
    MyPlayer *mus;
    WindowManager *wm;
    SubWindow *sw;
    Level *level;
    short score;
    char levelsLeft;

    void mode_play();
    void mode_menu();
    void mode_finalle(bool);
    void subwindowSetuper(char);
signals:
    void button_pressed();

public slots:
    void renovation();
    void lock_screen();
    void unlock_screen();
    void show_stamps();
    void switch_menu();
    void switch_play();
    void switch_finalle();
    void switch_finalle2();
    void exit0();
};

#endif // MAINWINDOW_H
