#pragma once
#include <string>
#include <vector>
#include "Student.h"

class Club {
private:
    std::string clubName;
    std::vector<Student*> members;
    std::vector<std::string> events;  // Список мероприятий клуба

public:
    Club(const std::string& name);
    void addMember(Student* student);
    void addEvent(const std::string& event);
    std::string getClubName() const;
    std::vector<Student*> getMembers() const;
    std::vector<std::string> getEvents() const;
};

