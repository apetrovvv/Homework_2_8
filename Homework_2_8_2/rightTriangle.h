#pragma once
#include "triangle.h"

class RightTriangle: public Triangle{
    public:
        RightTriangle(int a, int b, int c, int A, int B);
        RightTriangle(int a, int b, int c, int A, int B, int C);
        void getSide() override;
        void created() override;
};
