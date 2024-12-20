#include "Exam.h"

Exam::Exam(Course course, std::string examDate, int totalMarks)
    : course(course), examDate(examDate), totalMarks(totalMarks) {}

Course Exam::getCourse() const {
    return course;
}

std::string Exam::getExamDate() const {
    return examDate;
}

int Exam::getTotalMarks() const {
    return totalMarks;
}

bool Exam::isPassed(int marksObtained) const {
    return marksObtained >= totalMarks * 0.5;
}
