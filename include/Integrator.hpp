#ifndef H_Integrator
#define H_Integrator

class ForwardEuler{
protected:
    int param = 0;
public:
    void setParam(int p);
    int getParam();
};

#endif
