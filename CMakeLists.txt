
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)


add_executable(exercise1_test exercise1_test.cpp)
add_executable(exercise2_test exercise2_test.cpp)
add_executable(exercise3_test exercise3_test.cpp)
add_executable(exercise4_test exercise4_test.cpp)
add_executable(exercise5_test exercise5_test.cpp)
add_executable(exercise6_test exercise6_test.cpp)
add_executable(exercise7_test exercise7_test.cpp)
add_executable(exercise8_test exercise8_test.cpp)
add_executable(exercise9_test exercise9_test.cpp)
add_executable(exercise10_test exercise10_test.cpp)
add_executable(exercise11_test exercise11_test.cpp)
add_executable(exercise12_test exercise12_test.cpp)
add_executable(exercise13_test exercise13_test.cpp)
add_executable(exercise14_test exercise14_test.cpp)
add_executable(exercise15_test exercise15_test.cpp)
add_executable(exercise16_test exercise16_test.cpp)




target_link_libraries(exercise1_test
  PRIVATE
   GTest::GTest
   exercises)



target_link_libraries(exercise2_test
  PRIVATE
   GTest::GTest
   exercises)

target_link_libraries(exercise3_test
   PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise4_test
    PRIVATE
     GTest::GTest
     exercises)

target_link_libraries(exercise5_test
    PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise6_test
    PRIVATE
    GTest::GTest
    exercises)


target_link_libraries(exercise7_test
    PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise8_test
    PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise9_test
    PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise10_test
    PRIVATE
    GTest::GTest
    exercises)


target_link_libraries(exercise11_test
    PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise12_test
    PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise13_test
    PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise14_test
    PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise15_test
    PRIVATE
    GTest::GTest
    exercises)

target_link_libraries(exercise16_test
    PRIVATE
    GTest::GTest
    exercises)

add_test(exercise1_gtests exercise1_test)
add_test(exercise2_gtests exercise2_test)
add_test(exercise3_gtests exercise3_test)
add_test(exercise4_gtests exercise4_test)
add_test(exercise5_gtests exercise5_test)
add_test(exercise6_gtests exercise6_test)
add_test(exercise7_gtests exercise7_test)
add_test(exercise7_gtests exercise8_test)
add_test(exercise8_gtests exercise8_test)
add_test(exercise9_gtests exercise9_test)
add_test(exercise10_gtests exercise10_test)
add_test(exercise11_gtests exercise11_test)
add_test(exercise12_gtests exercise12_test)
add_test(exercise13_gtests exercise13_test)
add_test(exercise14_gtests exercise14_test)
add_test(exercise15_gtests exercise15_test)
add_test(exercise16_gtests exercise16_test)













