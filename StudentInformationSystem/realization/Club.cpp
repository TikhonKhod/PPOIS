#include "Club.h"
#include "Student.h"

Club::Club(const std::string& name) : clubName(name) {}

void Club::addMember(Student* student) {
    members.push_back(student);
}

void Club::addEvent(const std::string& event) {
    events.push_back(event);
}

std::string Club::getClubName() const {
    return clubName;
}

std::vector<Student*> Club::getMembers() const {
    return members;
}

std::vector<std::string> Club::getEvents() const {
    return events;
}
