#include "bus.h"
#include <iterator>

namespace bus
{
  unsigned int number(const std::vector<std::pair<int, int>> &busStops)
  {
    unsigned int total = 0;

    for (std::vector<std::pair<int, int>>::const_iterator iter = busStops.begin(); iter != busStops.end(); iter++)
    {
      total += iter->first;
      total -= iter->second;
    }

    return total;
  }
}
