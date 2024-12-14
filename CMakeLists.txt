cmake_minimum_required(VERSION 3.10)
project(RestaurantManagement)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)

# Пути к заголовочным файлам
include_directories(include)

# Все исходные файлы
file(GLOB_RECURSE SOURCES sipipi/*.cpp)
 
# Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Добавляем основное тестовое приложение
add_executable(run_tests ${SOURCES} tests/main.cpp tests/test_bill.cpp tests/test_chef.cpp
    tests/test_customer.cpp tests/test_dish.cpp tests/test_employee.cpp tests/test_feedback.cpp
    tests/test_inventory.cpp tests/test_loyalty_program.cpp tests/test_menu.cpp tests/test_order.cpp
    tests/test_payment.cpp tests/test_reservation.cpp tests/test_restaurant.cpp tests/test_table.cpp
    tests/test_waiter.cpp)

# Линковка с Google Test и pthread
target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread)
# Включение флагов для покрытия тестов
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

# Линковка с Google Test и pthread
target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread gcov)
