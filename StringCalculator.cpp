#include "StringCalculator.h"
#include <cctype>
#include <algorithm>

int add(string input)
{
  if (input.empty()) {
    return 0;
  }
  if (std::any_of(input.begin(), input.end(), [](char c) { return std::isalpha(c); })) {
  {
    return 0;
  } 
  throw "invalid argument";
}
