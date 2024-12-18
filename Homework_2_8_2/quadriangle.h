#pragma once
#include "figure.h"

class Quadriangle: public Figure{
    public:
        Quadriangle(int a, int b, int c, int d, 
        int A, int B, int C, int D);
        void getSide() override;
        void created() override;
    protected:
        int a;
        int b;
        int c;
        int d;
        int A;
        int B;
        int C;
        int D;
    private:
};
