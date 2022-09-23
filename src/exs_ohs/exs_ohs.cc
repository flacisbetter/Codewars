// Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

// Examples input/output:

// XO("ooxx") => true
// XO("xooxx") => false
// XO("ooxXm") => true
// XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
// XO("zzoo") => false

#include <string>
#include <iostream>
#include <algorithm>

bool XO(const std::string &str);

int main()
{
  const std::string test_string = "ooxx";
  bool test = XO(test_string);

  std::cout << test << std::endl;
  return 0;
}

bool XO(const std::string &str)
{
  int x_cnt = std::count(str.begin(), str.end(), 'x') + std::count(str.begin(), str.end(), 'X');
  int o_cnt = std::count(str.begin(), str.end(), 'o') + std::count(str.begin(), str.end(), 'O');

  return x_cnt == o_cnt;
}