#include <excercises.h>
#include <gtest/gtest.h>

TEST(HousesOut, TestHouses) {
  testing::internal::CaptureStdout();

  exercise_12("red", 3, "green", 3, "green", 2, "green", -1);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "2\n3\n");
}

TEST(HousesOut, TestHouses2) {
  testing::internal::CaptureStdout();

  exercise_12("red", 2, "green", 1, "red", 3, "red", 3);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "3\n");
}

TEST(HousesOut, TestHouses3) {
  testing::internal::CaptureStdout();

  exercise_12("red", 1, "green", 2, "blue", 3, "yellow", 3);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "");
}

TEST(HousesOut, TestHouses4) {
  testing::internal::CaptureStdout();

  exercise_12("grey", 5, "grey", 5, "grey", 5, "grey", 5);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "1\n2\n3\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}