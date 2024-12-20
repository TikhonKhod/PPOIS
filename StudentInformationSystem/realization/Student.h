#pragma once
#include <string>
#include <vector>
#include <memory> // Для использования smart pointers
#include "Course.h"
#include "Grade.h"
#include "Adress.h"  

class Payment; // Предварительное объявление класса Payment

class Student {
private:
    std::string name;
    int studentId;
    Address address;
    std::vector<Course> courses;
    std::vector<Grade> grades;
    std::vector<std::shared_ptr<Payment>> payments; // Вектор указателей на Payment

public:
    Student(std::string name, int studentId, Address address);
    void addCourse(Course course);
    void addGrade(Grade grade);
    void makePayment(std::shared_ptr<Payment> payment);  // Используем указатель
    std::string getName() const;
    std::vector<Course> getCourses() const;
    std::vector<Grade> getGrades() const;
};