#include "StringCalculator.h"
#include <gtest/gtest.h>

/* 1. If there is no input then the output is 0 */
TEST(StringCalculatorTestSuite, ExpectZeroForEmptyInput) 
{
  string input = "";
  int expectedValue = 0;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}

/* 2. If the input is characters, then the returned sum is 0. */
TEST(StringCalculatorTestSuite, ExpectZeroForCharacters) 
{
  string input = "gokul";
  int expectedValue = 0;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}

/* 3. If the given input string is a list of numbers separated by commas, the numbers are added up */
TEST(StringCalculatorTestSuite, ExpectSumForTwoNumbers)
{
  string input = "1,2,3";
  int expectedValue = 6;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}

/* 4. If the given input string is a list of numbers separated by new line characters, the numbers are added up */
TEST(StringCalculatorTestSuite, ExpectSumWithNewlineDelimite)
{
  string input = "1\n1\n2";
  int expectedValue = 4;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}

/* 5. If the given input consists of numbers greater than thousand then the number greater than 1000 should be ignored */
TEST(StringCalculatorTestSuite, IgnoreNumbersGreaterThan1000)
{
  string input = "1, 1001";
  int expectedValue = 1;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}

/* 6. If the given input consists of delimiters the numbers are added up */
TEST(StringCalculatorTestSuite, ExpectSumWithCustomDelimiter)
{
  string input = "//;\n1;2";
  int expectedValue = 3;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}

/* 7. If the give input is negative number then a warning should be given. */
TEST(StringCalculatorTestSuite, ExpectExceptionforNegativeNumber)
{
  string input = "-7";
  string expectedValue = "Negative not allowed";
  EXPECT_THROW(add(input), std::runtime_error);
  try {
    add(input);
  } catch (const std::runtime_error& e) {
    EXPECT_STREQ(e.what(), expectedValue.c_str());
  }
}

/* 8. If there is a single 0 then the output is 0 */
TEST(StringCalculatorTestSuite, ExpectZeroForSingleZero)
{
  string input = "0";
  int expectedValue = 0;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}

/* 9. If the given input is equal to 1000 then the sum must be calculated. */
TEST(StringCalculatorTestSuite, ExpectSumOfNumbersEqualto1000)
{
  string input = "999, 1000";
  int expectedValue = 1999;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}
