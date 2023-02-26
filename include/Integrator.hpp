/*
This header file defines the different types of integrators that the simulations will use.
*/
#ifndef H_Integrator
#define H_Integrator
#include "vec.hpp"

using namespace std;

/*
Main integrator superclass
*/
class Integrator{};

/*
function defenition for the basic forward euler*/
class ForwardEuler:Integrator{
  private:
    int param = 0;
  public:
    int getParam();
    vec step(vec x, float t, vec function(vec));
};

#endif
