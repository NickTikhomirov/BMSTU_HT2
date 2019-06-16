#ifndef ADDITIONALWINDOW_H
#define ADDITIONALWINDOW_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QIcon>

#include "Graphics/CustomButton.h"
#include "Graphics/Face.h"
#include "Graphics/Stamp.h"
#include "Graphics/TextButton.h"
#include "Graphics/TutorialPage.h"
#include "Graphics/SwitchingButton.h"

#include "Resizer.h"
#include "Generators/Randomizer.h"
#include "Logic/Level.h"

class AdditionalWindow : public QGraphicsView
{
    Q_OBJECT
public:
    explicit AdditionalWindow(char p, Level *l=0, QWidget *par=0);
    QGraphicsScene *scene;
private:
    void closeEvent(QCloseEvent *event);
signals:
    void closed();
    void provide(char);
public slots:
    void provide_input(char);
    void simpleCloser();
};

#endif // ADDITIONALWINDOW_H
