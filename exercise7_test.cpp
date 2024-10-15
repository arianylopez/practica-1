#include <excercises.h>
#include <gtest/gtest.h>

TEST(AreaSphere, TestAreaSphere) {
  testing::internal::CaptureStdout();

  exercise_7(10.9);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "1492.25\n");
}

TEST(AreaSphere, HandlesNegativeRadius) {
  testing::internal::CaptureStdout();

  exercise_7(-5.0);
  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "Error: Radius cannot be negative.\n");
}

TEST(AreaSphere, HandlesZeroRadius) {
  testing::internal::CaptureStdout();

  exercise_7(0.0);
  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "0\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}