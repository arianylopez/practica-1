#include <excercises.h>
#include <gtest/gtest.h>

TEST(Permutation, TestPermutation) {
  testing::internal::CaptureStdout();

  exercise_15(51, 876, 235);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Los valores son: a = 51 b = 876 y c = 235\n\
Permutamos: a => b, b => c, c => a\n\
Los valores despues de la permutacion son: a = 235 b = 51 c = 876\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}