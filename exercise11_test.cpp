#include <excercises.h>
#include <gtest/gtest.h>

TEST(Fibo, TestFibo) {
  const auto expected = "Esto no es de Fibonacci";
  const auto actual = exercise_11(1);
  ASSERT_EQ(actual, expected);
}

TEST(Fibo, TestFibo2) {
  const auto expected = "Esto no es de Fibonacci";
  const auto actual = exercise_11(12333);
  ASSERT_EQ(actual, expected);
}

TEST(Fibo, TestFiboCorrect) {
  const auto expected = "Se encontro a Fibonacci";
  const auto actual = exercise_11(11235813);
  ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}