#include <excercises.h>
#include <gtest/gtest.h>

TEST(StringsTests, TestStringsNoEqual) {
  testing::internal::CaptureStdout();
  const auto expected = "Aun sin suerte";
  const auto actual = exercise_9("apple", "banana", "cat", "dog", "eleven");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "abcde\n");
  ASSERT_EQ(actual, expected);
}

TEST(StringsTests, TestStringsNoEqual2) {
  testing::internal::CaptureStdout();
  const auto expected = "Aun sin suerte";
  const auto actual = exercise_9("a", "s", "d", "f", "g");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "asdfg\n");
  ASSERT_EQ(actual, expected);
}

TEST(StringsTests, TestStringsEqual) {
  testing::internal::CaptureStdout();
  const auto expected = "Hemos encontrado algo!";
  const auto actual = exercise_9("1", "two", "3", "four", "1");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "1t3f1\n");
  ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}