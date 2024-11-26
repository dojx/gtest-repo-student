#include "StringCalculator.h"
#include <gtest/gtest.h>

/* 	If there is no input then the output is 0 */
TEST(StringCalculatorTestSuite, ExpectZeroForEmptyInput) 
{
  string input = "";
  int expectedValue = 0;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}
/* If the input is characters, then the returned sum is 0. */
TEST(StringCalculatorTestSuite, ExpectZeroForCharacters) 
{
  string input = "gokul";
  int expectedValue = 0;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}
