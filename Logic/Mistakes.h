#ifndef MISTAKES_H
#define MISTAKES_H

#include <string>
#include <unordered_map>

#include <QString>

#include "Generators/Randomizer.h"

using std::string;
using std::unordered_map;

class Mistakes
{
    unordered_map<char,unsigned char> mistakes;
    void makeSomebodyHappy(unsigned char);
    void oneMistake(unsigned char&);
    void twoMistakes(unsigned char&, unsigned char&);
    bool isItYour_Mistake_With_Name(unsigned char&,unsigned char);

    static string interpret_high(unsigned char,char);
    static bool interpret_low(unsigned char &, unsigned char);
    static bool generateCorrectness();
    static bool maybeFlavor();
    static bool one_for_true_and_two_for_twrue();
    static bool equals(unsigned char,unsigned char);
public:
    Mistakes();
    bool isA();
    bool isB();
    bool isCorrect();
    bool isItYours(char,unsigned char);
    bool isSans(char);
    bool hasCorrectCountry();
    bool xHealthy();
    bool medicineNumberMistakes();
    bool isNameCorrect(char);
    bool isName2Correct(char);
    bool isSwapped(char);
    char anyDateMistakes();
    bool isFaceCorrect(char);
    bool isStampCorrect(char);

    string toString();
    QString text_form();
};

#endif // MISTAKES_H
