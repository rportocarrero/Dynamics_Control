#include "integrator.hpp"
#include "gtest/gtest.h"

TEST(IntegratorTest, PosSanity) { 
    EXPECT_EQ (0, 0);
}

TEST(IntegratorTest, ForwardEulerConstructor){
  ForwardEuler I = ForwardEuler();
  ASSERT_EQ(I.getParam(), 0);
}