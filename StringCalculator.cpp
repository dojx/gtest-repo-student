#include "StringCalculator.h"
#include <cctype>
#include <algorithm>

int add(string input)
{
  if (input.empty()) {
    return 0;
  }
  if (any_of(begin(input), end(input), isalpha))
  {
    return 0;
  } 
  throw "invalid argument";
}
