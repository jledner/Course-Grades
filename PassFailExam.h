#ifndef PASSFAILEXAM_H 
#define PASSFAILEXAM_H 

#include "GradedActivity.h"
// GradedActivity class declaration 

class PassFailExam : public GradedActivity {
protected:
    int correctAnswers;
    double totalQuestions;
    double score;  // To hold the numeric score 
public:
    // Default constructor 
    PassFailExam() {
        correctAnswers = 0;
        totalQuestions = 10.0;
        score = 0.0;
    }

    // Constructor 
    PassFailExam(double s) {
        score = s;
    }

    PassFailExam(int c) {
        correctAnswers = c;
        score = (correctAnswers / totalQuestions) * 100;
    }

    // Mutator function 
    void setScore(double s) {
        score = s;
    }
    void setScore(int c) {
        correctAnswers = c;
        score = (correctAnswers / totalQuestions) * 100;
    }

    // Accessor functions 
    double getScore() const {
        return score;
    }

    char getLetterGrade() const {
        char letterGrade; // To hold the letter grade 
        if (score >= 70)
            letterGrade = 'P';
        else
            letterGrade = 'F';
        return letterGrade;
    }

};

#endif 
