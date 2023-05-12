#include "../binary_search.h"
#include <gtest/gtest.h>
#include <vector>

TEST(Searching, BinarySearchTest) {
  // NOLINTBEGIN(cppcoreguidelines-avoid-magic-numbers)
  auto vec = std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9};
  ASSERT_EQ(mf::searching::binary_search(vec, 1), 0);
  ASSERT_EQ(mf::searching::binary_search(vec, 9), 8);
  ASSERT_EQ(mf::searching::binary_search(vec, 6), 5);
  ASSERT_EQ(mf::searching::binary_search(vec, 10), -1);
  // NOLINTEND(cppcoreguidelines-avoid-magic-numbers)
}