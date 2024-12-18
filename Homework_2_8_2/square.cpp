#include "square.h"

Square::Square(int a) : Quadriangle(a, a, a, a, 90, 90, 90, 90) {};
Square::Square(int a, int b, int c, int d,
               int A, int B, int C, int D) : Quadriangle(a, b, c, d, A, B, C, D)
{
    if (this->a != this->b && this->a != this->c && this->a != this->d)
        throw FigureArgumentException("стороны не равны");
    if (this->A != 90 && this->B != 90 && this->C != 90 && this->D != 90)
        throw FigureArgumentException("не все углы равны 90");
}
void Square::getSide()
{
    std::cout << "Квадрат:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl;
}
void Square::created()
{
    std::cout << std::format("Квадрат (стороны {}, {}, {}, {}; углы {}, {}, {}, {}) создан", a, b, c, d, A, B, C, D) << std::endl;
}