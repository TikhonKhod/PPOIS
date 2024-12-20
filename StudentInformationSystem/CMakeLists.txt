cmake_minimum_required(VERSION 3.10)
project(StudentInformationSystem)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)

# Пути к заголовочным файлам
include_directories(include)

# Все исходные файлы
file(GLOB_RECURSE SOURCES realization/*.cpp)
 
# Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Добавляем основное тестовое приложение
add_executable(run_tests ${SOURCES} tests/all_tests.cpp tests/Adress_test.cpp tests/Professor_test.cpp
    tests/Course_test.cpp tests/Grade_test.cpp tests/Payment_test.cpp tests/Student_test.cpp
    tests/Schedule_test.cpp tests/BankAccount_test.cpp tests/Library_test.cpp tests/Club_test.cpp
    tests/Department_test.cpp tests/DepartmentHead_test.cpp tests/Exam_test.cpp tests/Scholarship_test.cpp
    tests/Card_test.cpp)
# Линковка с Google Test и pthread
target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread)
# Включение флагов для покрытия тестов
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

# Линковка с Google Test и pthread
target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread gcov)
