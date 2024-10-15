#include <excercises.h>
#include <gtest/gtest.h>

TEST(JobEligibility, TestJob) {
  const auto expected = "Not eligible";
  const auto actual = exercise_13(13, 4);
  ASSERT_EQ(actual, expected);
}

TEST(JobEligibility, TestJob2) {
  const auto expected = "Project manager";
  const auto actual = exercise_13(18, 4);
  ASSERT_EQ(actual, expected);
}

TEST(JobEligibility, TestJob3) {
  const auto expected = "Senior project manager";
  const auto actual = exercise_13(18, 6);
  ASSERT_EQ(actual, expected);
}

TEST(JobEligibility, TestJob4) {
  const auto expected = "Project coordinator";
  const auto actual = exercise_13(18, 1);
  ASSERT_EQ(actual, expected);
}

TEST(JobEligibility, TestJob5) {
  const auto expected = "Not eligible";
  const auto actual = exercise_13(-18, 1);
  ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}