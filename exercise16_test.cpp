#include <excercises.h>
#include <gtest/gtest.h>

TEST(RentaBicicleta, TestBicicleta) {
  testing::internal::CaptureStdout();

  exercise_16(10, 19);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Haz alquilado una bicicleta por\n\
2 hora(s) con el tarifario de 1 boliviano(s)\n\
7 hora(s) con el tarifario de 2 boliviano(s)\n\
El monto total a pagar es de 16 boliviano(s).\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(RentaBicicleta, TestBicicleta2) {
  testing::internal::CaptureStdout();

  exercise_16(18, 20);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Haz alquilado una bicicleta por\n\
2 hora(s) con el tarifario de 1 boliviano(s)\n\
El monto total a pagar es de 2 boliviano(s).\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(RentaBicicleta, TestBicicleta3) {
  testing::internal::CaptureStdout();

  exercise_16(20, 10);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Que extraño, el inicio del alquiler es después del final...\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(RentaBicicleta, TestBicicleta4) {
  testing::internal::CaptureStdout();

  exercise_16(10, 10);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Que extraño, no has alquilado tu bicicleta por mucho tiempo!\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(RentaBicicleta, TestBicicleta5) {
  testing::internal::CaptureStdout();

  exercise_16(100, 10);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Las horas deben estar entre 0 y 24!\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(RentaBicicleta, TestBicicleta6) {
  testing::internal::CaptureStdout();

  exercise_16(10, -100);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Las horas deben estar entre 0 y 24!\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(RentaBicicleta, TestBicicleta7) {
  testing::internal::CaptureStdout();

  exercise_16(-10, -100);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Las horas deben estar entre 0 y 24!\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(RentaBicicleta, TestBicicleta8) {
  testing::internal::CaptureStdout();

  exercise_16(7, 17);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Haz alquilado una bicicleta por\n\
10 hora(s) con el tarifario de 2 boliviano(s)\n\
El monto total a pagar es de 20 boliviano(s).\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(RentaBicicleta, TestBicicleta9) {
  testing::internal::CaptureStdout();

  exercise_16(0, 24);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Haz alquilado una bicicleta por\n\
14 hora(s) con el tarifario de 1 boliviano(s)\n\
10 hora(s) con el tarifario de 2 boliviano(s)\n\
El monto total a pagar es de 34 boliviano(s).\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(RentaBicicleta, TestBicicleta10) {
  testing::internal::CaptureStdout();

  exercise_16(0, 1);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  std::string expected =
      "Haz alquilado una bicicleta por\n\
1 hora(s) con el tarifario de 1 boliviano(s)\n\
El monto total a pagar es de 1 boliviano(s).\n";
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}