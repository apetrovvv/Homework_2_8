#pragma once
#include "triangle.h"

class IsoscelesTriangle: public Triangle{
    public:
        IsoscelesTriangle(int a, int b, int c, 
            int A, int B, int C);
        IsoscelesTriangle(int a, int b, int A, int B);
        void getSide() override;
        void created() override;
};