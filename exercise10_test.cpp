#include <excercises.h>
#include <gtest/gtest.h>

TEST(SumDigits, TestSumDigits) {
  const auto expected = 22;
  const auto actual = exercise_10(3, 8);
  ASSERT_EQ(actual, expected);
}

TEST(SumDigits, TestSumDigits2) {
  const auto expected = 50;
  const auto actual = exercise_10(8, 17);
  ASSERT_EQ(actual, expected);
}

TEST(SumDigits, HandlesSingleDigitInputs) {
  const auto expected = 2;
  const auto actual = exercise_10(1, 1);
  ASSERT_EQ(actual, expected);
}

TEST(SumDigits, HandlesSumsOfDifferentLengths) {
  const auto expected = 36;
  const auto actual = exercise_10(9, 9);  // Sum with 2 digits
  ASSERT_EQ(actual, expected);
}

TEST(SumDigits, HandlesZeroInput) {
  const auto expected = 4;
  const auto actual = exercise_10(0, 4);
  ASSERT_EQ(actual, expected);
}

TEST(SumDigits, HandlesBothZeroInputs) {
  const auto expected = 0;
  const auto actual = exercise_10(0, 0);
  ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}