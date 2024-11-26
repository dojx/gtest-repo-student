#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite, ExpectZeroForEmptyInput) 
{
  string input = "";
  int expectedValue = 0;
  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}
