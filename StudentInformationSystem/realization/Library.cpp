#include "Library.h"
#include "Student.h"
#include <algorithm>

void Library::addBook(const std::string& book) {
    books.push_back(book);
}

bool Library::issueBook(const std::string& book, Student* student) {
    auto it = std::find(books.begin(), books.end(), book);
    if (it != books.end()) {
        books.erase(it);
        issuedBooks.push_back({book, student});
        return true;
    }
    return false;
}

bool Library::returnBook(const std::string& book, Student* student) {
    auto it = std::find_if(issuedBooks.begin(), issuedBooks.end(), 
        [&](const std::pair<std::string, Student*>& issued) {
            return issued.first == book && issued.second == student;
        });
    
    if (it != issuedBooks.end()) {
        issuedBooks.erase(it);
        books.push_back(book);
        return true;
    }
    return false;
}

std::vector<std::string> Library::getBooks() const {
    return books;
}

std::vector<std::pair<std::string, Student*>> Library::getIssuedBooks() const {
    return issuedBooks;
}
