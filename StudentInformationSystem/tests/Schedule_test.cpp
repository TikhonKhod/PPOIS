#include <gtest/gtest.h>
#include "../realization/Schedule.h"
#include "../realization/Course.h"
#include "../realization/Professor.h"

TEST(ScheduleTest, AddCourseTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    Schedule schedule;
    schedule.addCourse(course);
    EXPECT_EQ(schedule.getCourses().size(), 1);
}
