#pragma once
#include <string>
#include <vector>
#include "Student.h"

class Library {
private:
    std::vector<std::string> books; // Список доступных книг
    std::vector<std::pair<std::string, Student*>> issuedBooks; // Книги, выданные студентам

public:
    void addBook(const std::string& book);
    bool issueBook(const std::string& book, Student* student);
    bool returnBook(const std::string& book, Student* student);
    std::vector<std::string> getBooks() const;
    std::vector<std::pair<std::string, Student*>> getIssuedBooks() const;
};

