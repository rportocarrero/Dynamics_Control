#include "matrix.hpp"
#include "gtest/gtest.h"

/*
This method tests the matrix function that adds equally-sized 2 element vectors together.
*/
TEST(MatrixTest, AddingVectors2){
    vec inputA, inputB, output, expected;
    inputA = {1.0,2.0};
    inputB = {3.0,4.0};
    expected = {4.0,6.0};
    output = vec_add_vec(inputA, inputB);
    ASSERT_EQ(expected, output);
}

/*
This method tests adding of two 3-element vectors
*/
TEST(MatrixTest, AddingVectors3){
    vec inputA, inputB, output, expected;
    inputA = {1.0,1.0,1.0};
    inputB = {2.0,2.0,2.0};
    expected = {3.0,3.0,3.0};
    output = vec_add_vec(inputA, inputB);
    ASSERT_EQ(expected, output);
}

/*
This tests adding 0 element vectors
*/
TEST(MatrixTest, AddingVectors0){
    vec inputA, inputB, output, expected;
    inputA = {};
    inputB = {};
    expected = {};
    output = vec_add_vec(inputA, inputB);
    ASSERT_EQ(expected, output);
}

/*
This method tests a scalar multiplication of a vector*/
TEST(MatrixTest, scalarMult2){
    vec inputA, output, expected;
    float s = 2;
    inputA = {2.0,2.0,2.0};
    expected = {4.0,4.0,4.0};
    output = vec_scalar_mul_double(inputA, s);
    ASSERT_EQ(expected, output);
}

/*
This method tests a matrix multiplied by a vector
*/
TEST(MatrixTest, matrixMulVec){
    vec input_a, expected, result;
    mat A;
    result = matrix_mul_vector_double(A, input_a);
    ASSERT_EQ(expected, result);

}