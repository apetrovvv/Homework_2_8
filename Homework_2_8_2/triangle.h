#pragma once
#include "figure.h"

class Triangle: public Figure{
    public:
        Triangle(int a, int b, int c, 
        int A, int B, int C);
        void getSide() override;
        void created() override;
    protected:
        int a;
        int b;
        int c;
        int A;
        int B;
        int C;
};