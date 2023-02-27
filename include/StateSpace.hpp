/*
This is the header file for the state-space class
*/
#ifndef H_STATESPACE
#define H_STATESPACE

#include "integrator.hpp"
#include <Eigen/Dense>

using namespace Eigen;

class StateSpace{
    public:
        MatrixXd A,B,C,D;
        VectorXd x;
        Integrator I;
        StateSpace(MatrixXd A_in, MatrixXd B_in, MatrixXd C_in, MatrixXd D_in, MatrixXd x_0, Integrator I_in){
            A = A_in;
            B = B_in;
            C = C_in;
            D = D_in;
            x = x_0;
            I = I_in;
        };
        VectorXd step(VectorXd u, double t);
};

#endif