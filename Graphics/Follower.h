#ifndef FOLLOWER_H
#define FOLLOWER_H

#include <QObject>
#include <QGraphicsPixmapItem>

#include "Logic/ItemLockable.h"

class Follower : public QObject, public QGraphicsPixmapItem, public ItemLockable
{
    Q_OBJECT
    void recount(int&,int&,char);
    int getHeight(char);
    int getWidth(char);
public:
    explicit Follower(QGraphicsItem *par=0);
public slots:
    void drawAt(int,int,char);
    void hider();
    void f_lock();
    void f_unlock();

};

#endif // FOLLOWER_H
