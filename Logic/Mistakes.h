#ifndef MISTAKES_H
#define MISTAKES_H

#include <string>

#include <QString>

#include "Generators/Randomizer.h"

using std::string;

class Mistakes
{
    char forH;
    char forP;
    char forM;
    char forA;
    char forX;
    char forR;
    void makeSomebodyHappy(char);
    void oneMistake(char&);
    void twoMistakes(char&,char&);
    bool isItYours_forH(char);
    bool isItYours_forA(char);
    bool isItYours_forP(char);
    bool isItYours_forM(char);
    bool isItYours_forR(char);
    bool isItYours_forX(char);

    static string interpret_high(char,char);
    static bool interpret_low(char &,char);
    static bool generateCorrectness();
    static bool maybeFlavor();
    static char specialForYou_A(bool);
    static bool one_for_true_and_two_for_twrue();
    static bool equals(char,char);
public:
    Mistakes();
    bool isA();
    bool isB();
    bool isCorrect();
    bool isDinner();
    bool isItYours(char,char);
    bool isSans(char);
    string toString();
    QString text_form();
};

#endif // MISTAKES_H
