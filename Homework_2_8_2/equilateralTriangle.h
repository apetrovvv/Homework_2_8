#pragma once
#include "triangle.h"

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(int a);
    EquilateralTriangle(int a, int b, int c, 
            int A, int B, int C);
    void getSide() override;
    void created() override;
};
