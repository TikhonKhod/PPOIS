#pragma once
#include <string>
#include "Course.h"

class Exam {
private:
    Course course;
    std::string examDate;
    int totalMarks;

public:
    Exam(Course course, std::string examDate, int totalMarks);
    Course getCourse() const;
    std::string getExamDate() const;
    int getTotalMarks() const;
    bool isPassed(int marksObtained) const;
};

