/*
This is the implementation of some of the matrix operations that we 
will need for our simulation program
*/
#include "matrix.hpp"


/*
This function multiplies a vector by a scalar*/
vec vec_scalar_mul_double(vec M, double s){

    for(int i=0;i<M.size();i++){
        M[i] = M[i]*s;
    }
    return M;
};

/*
This function adds two vectors of the same size*/
vec vec_add_vec(vec A, vec B){
    vec result = A;
    for(int i=0;i<A.size();i++){
        result[i] = A[i]+B[i];
    }
    return result;
};

/*
This function multiplies a matrix by a vector
*/
vec matrix_mul_vector_double(mat A, vec v){
    return v;
};

