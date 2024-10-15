#include <excercises.h>
#include <gtest/gtest.h>

TEST(Exercise1, TestStdOut) {
  testing::internal::CaptureStdout();

  exercise_1("milk", "milkshake", "month");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "milk");
}

TEST(Exercise1, TestCharsStrings) {
  testing::internal::CaptureStdout();

  exercise_1("c", "a", "b");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "a");
}

TEST(Exercise1, TestSimilarStrings) {
  testing::internal::CaptureStdout();

  exercise_1("fire", "fog", "wood");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "fire");
}

TEST(Exercise1, HandlesEmptyStrings) {
  testing::internal::CaptureStdout();

  exercise_1("", "apple", "banana");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  EXPECT_EQ(YOUR_OUTPUT, "");
}

TEST(Exercise1, HandlesAllStringsEqual) {
  testing::internal::CaptureStdout();

  exercise_1("orange", "orange", "orange");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  EXPECT_EQ(YOUR_OUTPUT, "orange");
}

TEST(Exercise1, HandlesSingleCharacterStrings) {
  testing::internal::CaptureStdout();

  exercise_1("a", "b", "c");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  EXPECT_EQ(YOUR_OUTPUT, "a");
}

TEST(Exercise1, HandlesSpecialCharacters) {
  testing::internal::CaptureStdout();

  exercise_1("!", "@", "#");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  EXPECT_EQ(YOUR_OUTPUT, "!");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}