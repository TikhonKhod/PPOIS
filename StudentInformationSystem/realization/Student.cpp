#include "Student.h"
#include "Payment.h" // Подключаем Payment.h здесь

Student::Student(std::string name, int studentId, Address address)
    : name(name), studentId(studentId), address(address) {}

void Student::addCourse(Course course) {
    courses.push_back(course);
}

void Student::addGrade(Grade grade) {
    grades.push_back(grade);
}

void Student::makePayment(std::shared_ptr<Payment> payment) {
    payments.push_back(payment);  // Добавление указателя на объект Payment
}

std::string Student::getName() const {
    return name;
}

std::vector<Course> Student::getCourses() const {
    return courses;
}

std::vector<Grade> Student::getGrades() const {
    return grades;
}