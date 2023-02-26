/*
This file defines the main methods for all of the integrators that we will be using.*/
#include "integrator.hpp"
#include "matrix.hpp"

using namespace std;

/*
This function defines the forward euler step.
*/
vec ForwardEuler::step(vec x, float t, vec function(vec)){
    vec mul = vec_scalar_mul_double(function(x), t);
    return vec_add_vec(mul,x);
}