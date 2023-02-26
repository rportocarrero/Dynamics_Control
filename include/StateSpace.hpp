/*
This is the header file for the state-space class
*/
#ifndef H_STATESPACE
#define H_STATESPACE

#include "matrix.hpp"
#include "integrator.hpp"

class StateSpace{
    public:
        mat A,B,C,D;
        vec x;
        Integrator I;
        StateSpace(mat A_in, mat B_in, mat C_in, mat D_in, vec x_0, Integrator I_in){
            A = A_in;
            B = B_in;
            C = C_in;
            D = D_in;
            x = x_0;
            I = I_in;
        };
        vec step();
};

#endif