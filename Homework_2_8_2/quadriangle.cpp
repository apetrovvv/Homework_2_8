#include "quadriangle.h"

Quadriangle::Quadriangle(int a, int b, int c, int d,
                         int A, int B, int C, int D) : Figure(4)
{   
    if (A+B+C+D != 360){
    throw FigureArgumentException("сумма углов не равна 360");
    }
    else {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    }
}
void Quadriangle::getSide()
{
    std::cout << "Четырехугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl;
}
void Quadriangle::created()
{
    std::cout <<std::format("Четырехугольник (стороны {}, {}, {}, {}; углы {}, {}, {}, {}) создан", a, b, c, d, A, B, C, D)<< std::endl;
}
