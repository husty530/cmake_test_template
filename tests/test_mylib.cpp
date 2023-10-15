#include "gtest/gtest.h"
#include "calc.h"

TEST(test_calc, add) {
  EXPECT_EQ(1.0, my_add(0, 1));
  EXPECT_EQ(6.0, my_add(3, 3));
  EXPECT_EQ(-9.0, my_add(-12, 3));
}

TEST(test_calc, sub) {
  EXPECT_EQ(4.0, my_sub(5, 1));
  EXPECT_EQ(1.0, my_sub(4, 3));
  EXPECT_EQ(-10.0, my_sub(-6, 4));
}

TEST(test_calc, mul) {
  EXPECT_EQ(6.0, my_mul(1.5, 4));
  EXPECT_EQ(0.0, my_mul(0, 10));
  EXPECT_EQ(-6.0, my_mul(-2, 3));
}

TEST(test_calc, div) {
  EXPECT_EQ(0.0, my_div(0, 1));
  EXPECT_EQ(4.0, my_div(8, 2));
  EXPECT_EQ(-0.5, my_div(-1, 2));
}
