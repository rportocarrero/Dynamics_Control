#include "main.hpp"
#include "stateSpace.hpp"
#include <iostream>

using namespace std;

int main(){
    MatrixXd A{{1.0,0.0},{0.0,1.0}};
    MatrixXd B{{1.0,0.0},{0.0,1.0}};
    MatrixXd C{{1.0,0.0},{0.0,1.0}};
    MatrixXd D{{1.0,0.0},{0.0,1.0}};
    VectorXd x_0{{1.0},{1.0}};
    VectorXd u{{1.0},{1.0}};
    VectorXd x_expected{{2.0},{2.0}};
    double t = 0.1;
    Integrator I = ForwardEuler();
    StateSpace model = StateSpace(A,B,C,D,x_0,I);

    //step
    for(int i=0;i<60;i++){
        //VectorXd output = model.step(u, t);
        cout << u << endl;
    }

    return 0;
    
};