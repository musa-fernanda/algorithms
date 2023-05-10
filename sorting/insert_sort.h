#ifndef __INSERT_SORT_H__
#define __INSERT_SORT_H__

#include <vector>

namespace mf::sorting {
  auto insert_sort(std::vector<int>& vec) {
    for (auto i = 1ul; i < vec.size(); ++i) {
      auto key = vec.at(i);
      auto j = i;
      while (j > 0 and key < vec.at(j - 1)) {
        vec.at(j) = vec.at(j - 1);
        --j;
      }
      vec.at(j) = key;
    }
  }
}  // namespace mf::sorting

#endif