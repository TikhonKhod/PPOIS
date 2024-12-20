#include <gtest/gtest.h>
#include "../realization/Library.h"
#include "../realization/Student.h"

TEST(LibraryTest, AddBookTest) {
    Library library;
    library.addBook("C++ Programming");
    EXPECT_EQ(library.getBooks().size(), 1);
    EXPECT_EQ(library.getBooks()[0], "C++ Programming");
}

TEST(LibraryTest, IssueBookTest) {
    Student student("John Doe", 12345, Address("Main St", "New York", "10001"));
    Library library;
    library.addBook("C++ Programming");
    EXPECT_TRUE(library.issueBook("C++ Programming", &student));
    EXPECT_EQ(library.getBooks().size(), 0);
    EXPECT_EQ(library.getIssuedBooks().size(), 1);
    EXPECT_EQ(library.getIssuedBooks()[0].first, "C++ Programming");
}

TEST(LibraryTest, ReturnBookTest) {
    Student student("John Doe", 12345, Address("Main St", "New York", "10001"));
    Library library;
    library.addBook("C++ Programming");
    library.issueBook("C++ Programming", &student);
    EXPECT_TRUE(library.returnBook("C++ Programming", &student));
    EXPECT_EQ(library.getBooks().size(), 1);
    EXPECT_EQ(library.getIssuedBooks().size(), 0);
}
