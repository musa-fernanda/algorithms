#include "../bubble_sort.h"
#include <gtest/gtest.h>
#include <algorithm>
#include <vector>

TEST(Sorting, BubbleSortTest) {
  // NOLINTBEGIN(cppcoreguidelines-avoid-magic-numbers)
  auto vec = std::vector<int>{};
  auto expected = std::vector<int>{};

  vec = std::vector<int>{3, 2, 1, 5, 4};
  expected = std::vector<int>{1, 2, 3, 4, 5};
  mf::sorting::bubble_sort(vec);

  ASSERT_TRUE(std::is_sorted(vec.begin(), vec.end()));
  ASSERT_TRUE(std::is_sorted(expected.begin(), expected.end()));
  ASSERT_EQ(vec, expected);
  // NOLINTEND(cppcoreguidelines-avoid-magic-numbers)
};