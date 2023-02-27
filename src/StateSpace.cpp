/*
This file implements a generic state-space model.
*/
#include "stateSpace.hpp"

VectorXd StateSpace::step(VectorXd u, double t){
    VectorXd x_dot = this->A*this->x+this->B*u;
    VectorXd y = this->C*this->x+this->D*u;
    //this->x = this->I.step(this->x, x_dot, t);
    return y;
}
