#include "sum.h"
#include <vector>
#include <algorithm>
#include <iostream>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
  int lowest1, lowest2;
  std::sort(numbers.begin(), numbers.end());

  lowest1 = numbers[0];
  lowest2 = numbers[1];

  long sum = lowest1 + lowest2;
  return sum;
}