#include "rhombus.h"

Rhombus::Rhombus(int a, int A, int B) : Quadriangle(a, a, a, a, A, B, A, B) {};
Rhombus::Rhombus(int a, int b, int c, int d,
                 int A, int B, int C, int D) : Quadriangle(a, b, c, d, A, B, C, D)
{
    if (this->a != this->b && this->a != this->c && this->a != this->d)
       throw FigureArgumentException("все стороны не равны");
    if (this->A != this->C && this->B != this->D)
       throw FigureArgumentException("углы попарно не равны");
};

void Rhombus::getSide()
{
    std::cout << "Ромб:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl;
}
void Rhombus::created()
{
    std::cout << std::format("Ромб (стороны {}, {}, {}, {}; углы {}, {}, {}, {}) создан", a, b, c, d, A, B, C, D) << std::endl;
}