/*
This header file defines the different types of integrators that the simulations will use.
*/
#ifndef H_Integrator
#define H_Integrator
#include "matrix.hpp"

using namespace std;

/*
Main integrator superclass
*/
class Integrator{
  public:
    vec step(vec x, float t, vec functtion(vec));
};

/*
function defenition for the basic forward euler*/
class ForwardEuler: public Integrator{
  public:
    int getParam();
    vec step(vec x, float t, vec function(vec));
};

#endif
