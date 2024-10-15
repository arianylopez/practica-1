#include <excercises.h>
#include <gtest/gtest.h>

TEST(DivTest, TestDiv) {
  testing::internal::CaptureStdout();

  exercise_3(10, 2);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "5\n");
}

TEST(DivTest, TestDiv2) {
  testing::internal::CaptureStdout();

  exercise_3(3, 5);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "0\n");
}

TEST(DivTest, TestDivZero) {
  testing::internal::CaptureStdout();

  exercise_3(11, 0);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "Impossible\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}