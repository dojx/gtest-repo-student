#include "StringCalculator.h"

int checkIsEmpty(string input) {
  int result = -1;
  if (input.empty()) {
    result = 0;
  }
  return result;
}

int checkIsNotNumber(string input) {
  int result = -1;
  for (char ch : input) {
    if (!isdigit(ch)) {
      result = 0;
      break;
    }
  }
  return result;
}

int add(string input)
{
  int result = -1;
  result = checkIsEmpty(input) | checkIsNotNumber(input);
  return result;
}
