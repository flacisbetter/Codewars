#include "bus.h"
#include <vector>
#include <utility>
#include <iostream>

int main()
{
  using P = std::pair<int, int>;
  using V = std::vector<P>;

  const std::vector<std::pair<int, int>> busStops = V{P{3, 0}, P{9, 1}, P{4, 8}, P{12, 2}, P{6, 1}, P{7, 8}};

  int passengers = bus::number(busStops);

  std::cout << passengers << std::endl;

  return 0;
}