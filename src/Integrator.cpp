/*
This file defines the main methods for all of the integrators that we will be using.*/
#include "integrator.hpp"

using namespace std;

/*
This function defines the forward euler step.
*/
VectorXd ForwardEuler::step(VectorXd x, VectorXd x_dot, double t){
    return x_dot*t+x;
}
