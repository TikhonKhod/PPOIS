#pragma once

#include <string>
#include "Professor.h"
using namespace std;

class Course {
private:
    string courseName;
    int courseId;
    Professor professor;

public:
    Course(string courseName, int courseId, Professor professor);
    string getCourseName() const;
    Professor getProfessor() const;
};


