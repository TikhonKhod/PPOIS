#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>
using namespace std;

class Professor {
private:
    string name;
    string department;

public:
    Professor(string name, string department);
    string getName() const;
    string getDepartment() const;
};

#endif // PROFESSOR_H