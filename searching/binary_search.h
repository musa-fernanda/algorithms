#ifndef __BINARY_SEARCH_H__
#define __BINARY_SEARCH_H__

#include <vector>

namespace mf::searching {
  auto binary_search(const std::vector<int>& vec, int val) -> std::size_t {
    auto left = 0ul;
    auto right = vec.size() - 1;

    while (left <= right) {
      auto mid = (left + right) / 2;
      if (vec.at(mid) == val) {
        return mid;
      } else if (vec.at(mid) < val) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }

    return -1;
  }
}  // namespace mf::searching

#endif