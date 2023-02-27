/*
These files test the state-space implementation*/
#include "gtest/gtest.h"
#include "stateSpace.hpp"
#include "integrator.hpp"
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

/*
sanity check*/
TEST(StateSpaceTest, PosSanity) { 
    EXPECT_EQ (0, 0);
}

/*
This tests a basic initializaton of the state-space model
*/
TEST(StateSpaceTest, Initialize){
    MatrixXd A{{1.0,0.0},{0.0,1.0}};
    MatrixXd B{{0.0,1.0}};
    MatrixXd C{{1.0,0.0}};
    MatrixXd D{{0.0,0.0}};
    VectorXd x_0{{1.0},{1.0}};
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
TEST(StateSpaceTest, StateSpaceEuler){

    MatrixXd A{{1.0,0.0},{0.0,1.0}};
    MatrixXd B{{1.0,0.0},{0.0,1.0}};
    MatrixXd C{{1.0,0.0},{0.0,1.0}};
    MatrixXd D{{1.0,0.0},{0.0,1.0}};
    VectorXd x_0{{1.0},{1.0}};
    VectorXd u{{1.0},{1.0}};
    VectorXd x_expected{{2.0},{2.0}};
    double t = 0.1;
    Integrator I = ForwardEuler();
    StateSpace SSmodel = StateSpace(A,B,C,D,x_0,I);

    //step
    VectorXd output = SSmodel.step(u, t);

    //results
    ASSERT_EQ(output, x_expected);
}
