/*
This header file is for the basic matrix operations*/
#ifndef H_MATRIX
#define H_MATRIX

#include <vector>
using namespace std;

/*
The vec structure encapsulates a vector with one dimension*/
typedef vector<double> vec;

/*
The mat structure encapsulates a 2D vector.
*/
typedef vector<vector<double>> mat;

vec vec_scalar_mul_double(vec M, double s);
vec vec_add_vec(vec A, vec B);
vec matrix_mul_vector_double(mat A, vec v);

#endif
