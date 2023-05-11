#ifndef __LINEAR_SEARCH_H__
#define __LINEAR_SEARCH_H__

#include <vector>

namespace mf::searching {
  auto linear_search(const std::vector<int>& vec, int val) -> std::size_t {
    for (auto i = 0ul; i < vec.size(); ++i) {
      if (vec.at(i) == val) {
        return i;
      }
    }
    return -1;
  }
}  // namespace mf::searching

#endif