#ifndef TWINBUTTONS_H
#define TWINBUTTONS_H

#include "Graphics\CustomButton.h"

class TwinButtons : public QObject
{
    Q_OBJECT
public:
    TwinButtons();
    ~TwinButtons();
    CustomButton *right;
    CustomButton *left;
    CustomButton *tech;
    char score;
    void unlock();
    void lock();

public slots:
    void analyze_correct();
    void analyze_incorrect();
    void score_increase();
    void forceFinish();
    void ennul();
signals:
    void result(char);
};

#endif // TWINBUTTONS_H
