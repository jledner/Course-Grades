#include "CourseGrades.h"

int main() {
    int questionsRight = 8;
    GradedActivity* myLab = new GradedActivity(76);
    PassFailExam* myExam = new PassFailExam(9);
    Essay* myEssay = new Essay();
    myEssay->setScore(15, 15, 15, 15);
    FinalExam* myFinalExam = new FinalExam(50, 5);

    CourseGrades myGrades = CourseGrades();
    myGrades.setLab(myLab);
    myGrades.setPassFailExam(myExam);
    myGrades.setEssay(myEssay);
    myGrades.setPassFailExam(myFinalExam);

    myGrades.print();

    return 0;
}