#include "integrator.hpp"
#include "gtest/gtest.h"
#include <Eigen/Dense>

using namespace std;

/*
Sanity test with a positive value*/
TEST(IntegratorTest, PosSanity) { EXPECT_EQ(0, 0); }

/*
This is a placeholder function for the below test
*/
VectorXd ForwarEuler2d_function(VectorXd x){
  return x;
}

/*
This tests a single forward step of the euler method for 2D
*/
TEST(IntegratorTest, ForwardEuler2d) {
  ForwardEuler I = ForwardEuler();

  // setup test preconditions
  VectorXd input_x {{1.0},{2.0}};
  VectorXd expected_x {{1.1},{2.2}};
  double t = 0.1;
  VectorXd (*func_ptr)(VectorXd){&ForwarEuler2d_function};
  VectorXd x_dot = func_ptr(input_x);

  //step through test
  VectorXd output_x = I.step(input_x, x_dot, t);
  ASSERT_EQ(output_x, expected_x);
}

/*
This is a placeholder function for the below test
*/
VectorXd ForwarEuler3d_function(VectorXd x){
  return x;
}

/*
This tests a single forward step of the euler method
*/
TEST(IntegratorTest, ForwardEuler3d) {
  ForwardEuler I = ForwardEuler();

  // setup test preconditions
  VectorXd input_x {{1.0},{2.0},{3.0}};
  VectorXd expected_x {{1.1},{2.2},{3.3}};
  double t = 0.1;
  VectorXd (*func_ptr)(VectorXd){&ForwarEuler3d_function};
  VectorXd x_dot = func_ptr(input_x);
  //step through test
  VectorXd output_x = I.step(input_x, x_dot, t);
  ASSERT_EQ(output_x, expected_x);
}