#include "test.h"
#include <iostream>

namespace test
{
  void print(const std::string &str)
  {
    std::cout << str << std::endl;
  }
}

namespace test2
{
  void print(const std::string &str)
  {
    std::cout << str << std::endl;
  }
}
