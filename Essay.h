#ifndef ESSAY_H
#define ESSAY_H

#include "GradedActivity.h"
#include <iostream>
using namespace std;

class Essay : public GradedActivity {
private:
    double grammarScore;
    double spellingScore;
    double lengthScore;
    double contentScore;
public:
    Essay() {
        grammarScore = 0.0;
        spellingScore = 0.0;
        lengthScore = 0.0;
        contentScore = 0.0;
    }

    virtual void setScore(double g, double s, double l, double c) {
        bool validInput = true;
        if (g >= 0 && g <= 30) {
            grammarScore = g;
        }
        else {
            validInput = false;
            cout << "Invalid grammar score" << endl;
        }

        if (s >= 0 && s <= 20) {
            spellingScore = s;
        }
        else {
            validInput = false;
            cout << "Invalid spelling score" << endl;
        }
        if (l >= 0 && l <= 20) {
            lengthScore = l;
        }
        else {
            validInput = false;
            cout << "Invalid length score" << endl;
        }
        if (c >= 0 && c <= 30) {
            contentScore = c;
        }
        else {
            validInput = false;
            cout << "Invalid content score" << endl;
        }

        if (validInput) {
            GradedActivity::setScore(getScore());
        }
    }

    virtual double getScore() {
        return grammarScore + spellingScore + lengthScore + contentScore;
    }

    double getGrammarScore() {
        return grammarScore;
    }

    double getSpellingScore() {
        return spellingScore;
    }

    double getLengthScore() {
        return lengthScore;
    }

    double getContentScore() {
        return contentScore;
    }
};

#endif