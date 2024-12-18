#include "triangle.h"

Triangle::Triangle(int a, int b, int c,
                   int A, int B, int C) : Figure(3)
{
    if (A + B + C != 180)
    {
        throw FigureArgumentException("сумма углов не равна 180");
    }
    else
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
}

void Triangle::getSide()
{
    std::cout << "Треугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl;
}
void Triangle::created(){
    std::cout <<std::format("Треугольник (стороны {}, {}, {}; углы {}, {}, {}) создан", a, b, c, A, B, C)<< std::endl;
}
