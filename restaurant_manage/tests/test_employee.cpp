#include <gtest/gtest.h>
#include "../realization/Employee.h"

// Тест создания сотрудника
TEST(EmployeeTest, CreateEmployee) {
    Employee employee("John", 3000);
    EXPECT_DOUBLE_EQ(employee.getSalary(), 3000);
}

// Тест отображения сотрудника
TEST(EmployeeTest, DisplayEmployee) {
    Employee employee("John", 3000);
    testing::internal::CaptureStdout();
    employee.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Employee: John, Salary: $3000\n");
}