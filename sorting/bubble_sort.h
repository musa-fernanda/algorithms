#ifndef __BUBBLE_SORT_H__
#define __BUBBLE_SORT_H__

#include <vector>

namespace mf::sorting {
  auto bubble_sort(std::vector<int>& vec) {
    for (auto i = 0ul; i < vec.size(); ++i) {
      auto& a = vec.at(i);
      for (auto j = i; j < vec.size(); ++j) {
        auto& b = vec.at(j);
        if (a > b) {
          // swap
          auto temp = a;
          a = b;
          b = temp;
        }
      }
    }
  }
}  // namespace mf::sorting

#endif
