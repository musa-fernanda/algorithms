#include "../linear_search.h"
#include <gtest/gtest.h>
#include <vector>

TEST(Searching, LinearSearchTest) {
  // NOLINTBEGIN(cppcoreguidelines-avoid-magic-numbers)
  auto vec = std::vector<int>{1, 7, 8, 2, 9, 3, 2, 5};
  ASSERT_EQ(mf::searching::linear_search(vec, 1), 0);
  ASSERT_EQ(mf::searching::linear_search(vec, 2), 3);
  ASSERT_EQ(mf::searching::linear_search(vec, 10), -1);
  ASSERT_EQ(mf::searching::linear_search(vec, 5), vec.size() - 1);
  // NOLINTEND(cppcoreguidelines-avoid-magic-numbers)
}