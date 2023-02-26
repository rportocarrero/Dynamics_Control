#include "integrator.hpp"
#include "matrix.hpp"
#include "gtest/gtest.h"

using namespace std;

/*
Sanity test with a positive value*/
TEST(IntegratorTest, PosSanity) { EXPECT_EQ(0, 0); }

/*
This is a placeholder function for the below test
*/
vec ForwarEuler2d_function(vec x){
  return x;
}

/*
This tests a single forward step of the euler method for 2D
*/
TEST(IntegratorTest, ForwardEuler2d) {
  ForwardEuler I = ForwardEuler();

  // setup test preconditions
  vec input_x, output_x, expected_x;
  input_x = {1.0,2.0};
  expected_x = {1.1,2.2};
  float t = 0.1;
  vec (*func_ptr)(vec){&ForwarEuler2d_function};

  //step through test
  output_x = I.step(input_x, t, func_ptr);
  ASSERT_EQ(output_x, expected_x);
}

/*
This is a placeholder function for the below test
*/
vec ForwarEuler3d_function(vec x){
  return x;
}

/*
This tests a single forward step of the euler method
*/
TEST(IntegratorTest, ForwardEuler3d) {
  ForwardEuler I = ForwardEuler();

  // setup test preconditions
  vec input_x, output_x, expected_x;
  input_x = {1.0,2.0,3.0};
  expected_x = {1.1,2.2,3.3};
  float t = 0.1;
  vec (*func_ptr)(vec){&ForwarEuler3d_function};

  //step through test
  output_x = I.step(input_x, t, func_ptr);
  ASSERT_EQ(output_x, expected_x);
}