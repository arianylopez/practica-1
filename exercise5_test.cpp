#include <excercises.h>
#include <gtest/gtest.h>

TEST(CharTest, TestUpperChars) {
  testing::internal::CaptureStdout();

  exercise_5('C');

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "upper-case alphabet\n");
}

TEST(CharTest, TestLowerChars) {
  testing::internal::CaptureStdout();

  exercise_5('z');

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "lower-case alphabet\n");
}

TEST(CharTest, TestIncorrectChars) {
  testing::internal::CaptureStdout();

  exercise_5(' ');

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "not an alphabet\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}