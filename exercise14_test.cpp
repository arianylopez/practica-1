#include <excercises.h>
#include <gtest/gtest.h>

TEST(DocumentsTest, TestDocumentsZero) {
  const auto expected = "No se encontraron documentos";
  const auto actual = exercise_14(0);
  ASSERT_EQ(actual, expected);
}

TEST(DocumentsTest, TestDocumentsNeg) {
  const auto expected = "No se encontraron documentos";
  const auto actual = exercise_14(-10);
  ASSERT_EQ(actual, expected);
}

TEST(DocumentsTest, TestDocumentsOne) {
  const auto expected = "Se encontro un documento";
  const auto actual = exercise_14(1);
  ASSERT_EQ(actual, expected);
}

TEST(DocumentsTest, TestDocuments) {
  const auto expected = "4 documentos encontrados";
  const auto actual = exercise_14(4);
  ASSERT_EQ(actual, expected);
}

TEST(DocumentsTest, TestDocumentsN) {
  const auto expected = "42312312 documentos encontrados";
  const auto actual = exercise_14(42312312);
  ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}