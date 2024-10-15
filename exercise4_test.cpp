#include <excercises.h>
#include <gtest/gtest.h>

TEST(CostProduct, TestCosts) {
  testing::internal::CaptureStdout();

  exercise_4(100, 110, 120, 5, 10);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "100\n");
}

TEST(DivTest, TestCosts2) {
  testing::internal::CaptureStdout();

  exercise_4(115, 110, 120, 5, 10);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "109.25\n");
}

TEST(DivTest, TestCostsDouble) {
  testing::internal::CaptureStdout();

  exercise_4(150, 110, 120, 5, 12.5);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "131.25\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}