#include <excercises.h>
#include <gtest/gtest.h>

TEST(DaysTest, TestCorrectDay) {
  testing::internal::CaptureStdout();

  exercise_6(1);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "Monday\n");
}

TEST(DaysTest, TestCorrectDay4) {
  testing::internal::CaptureStdout();

  exercise_6(4);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "Thursday\n");
}

TEST(DaysTest, TestInCorrectDay) {
  testing::internal::CaptureStdout();

  exercise_6(-1);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "Invalid input\n");
}

TEST(DaysTest, TestInCorrectDay2) {
  testing::internal::CaptureStdout();

  exercise_6(1000);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "Invalid input\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}