#include <gtest/gtest.h>
#include "../realization/Club.h"
#include "../realization/Student.h"

TEST(ClubTest, AddMemberTest) {
    Student student("John Doe", 12345, Address("Main St", "New York", "10001"));
    Club club("Science Club");
    club.addMember(&student);
    
    EXPECT_EQ(club.getMembers().size(), 1);
    EXPECT_EQ(club.getMembers()[0]->getName(), "John Doe");
}

TEST(ClubTest, AddEventTest) {
    Club club("Science Club");
    club.addEvent("Physics Lecture");

    EXPECT_EQ(club.getEvents().size(), 1);
    EXPECT_EQ(club.getEvents()[0], "Physics Lecture");
}
