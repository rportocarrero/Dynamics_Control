/*
These files test the state-space implementation*/
#include "gtest/gtest.h"
#include "stateSpace.hpp"
#include "matrix.hpp"
#include "integrator.hpp"

/*
sanity check*/
TEST(StateSpaceTest, PosSanity) { 
    EXPECT_EQ (0, 0);
}

/*
This tests a basic initializaton of the state-space model
*/
TEST(SateSpaceTest, Initialize){
    mat A = {{1.0,0.0},{0.0,1.0}};
    mat B = {{0.0},{1.0}};
    mat C = {{1.0,0.0}};
    mat D = {{0.0,0.0}};
    vec x_0 = {1.0,1.0};
    Integrator I = ForwardEuler();
    StateSpace model = StateSpace(A,B,C,D,x_0,I);
    ASSERT_EQ(model.A, A);
    ASSERT_EQ(model.B, B);
    ASSERT_EQ(model.C, C);
    ASSERT_EQ(model.D, D);
    ASSERT_EQ(model.x, x_0);
}

/*
Test state-space model with integrator step
*/
TEST(StatesSpaceTest, StateSpaceEuler){
    // preconditions
    mat A = {{1.0,0.0},{0.0,1.0}};
    mat B = {{1.0},{1.0}};
    mat C = {{1.0,1.0}};
    mat D = {{0.0,0.0}};
    vec x_0 = {1.0,1.0};
    vec x_expected = {0.0, 0.0};
    Integrator I = ForwardEuler();
    StateSpace model = StateSpace(A,B,C,D,x_0,I);

    //step
    model.step();

    //results
    ASSERT_EQ(model.x, x_expected);
}
