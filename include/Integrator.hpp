/*
This header file defines the different types of integrators that the simulations will use.
*/
#ifndef H_Integrator
#define H_Integrator
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

/*
Main integrator superclass
*/
class Integrator{
  public:
    VectorXd step(VectorXd x, VectorXd x_dot, double t);
};

/*
function defenition for the basic forward euler*/
class ForwardEuler: public Integrator{
  public:
    int getParam();
    VectorXd step(VectorXd x, VectorXd x_dot, double t);
};

#endif
