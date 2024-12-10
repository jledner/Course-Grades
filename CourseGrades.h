#include <iostream>
#include <string>
#include "GradedActivity.h"
#include "Essay.h"
#include "PassFailExam.h"
#include "FinalExam.h"

using namespace std;

class CourseGrades {
private:
    GradedActivity* grades[4];
public:
    void setLab(GradedActivity* lab) {
        if (lab != nullptr) {
            GradedActivity* newLab = new GradedActivity(lab->getScore());
            grades[0] = newLab;
        }
        else
            cout << "Invalid entry" << endl;
    }
    void setPassFailExam(PassFailExam* exam) {
        if (exam != nullptr) {
            PassFailExam* newExam = new PassFailExam(exam->getScore());
            grades[1] = newExam;
        }
        else
            cout << "Invalid entry" << endl;
    }
    void setEssay(Essay* essay) {
        if (essay != nullptr) {
            Essay* newEssay = new Essay();
            newEssay->setScore(essay->getGrammarScore(), essay->getSpellingScore(), essay->getLengthScore(), essay->getContentScore());
            grades[2] = newEssay;
        }
        else
            cout << "Invalid entry" << endl;
    }
    void setPassFailExam(FinalExam* exam) {
        if (exam != nullptr) {
            FinalExam* newFinalExam = new FinalExam(exam->getNumQuestions(), exam->getNumMissed());
            grades[3] = newFinalExam;
        }
        else
            cout << "Invalid entry" << endl;
    }
    void print() {
        for (int i = 0; i < 4; i++) {
            cout << "Score for object " << i << ": " << grades[i]->getLetterGrade() << endl;
        }
    }
};