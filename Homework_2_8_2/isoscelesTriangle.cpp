#include "isoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b,
                                     int A, int B) : Triangle(a, b, a, A, B, A) {};
IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, 
            int A, int B, int C) : Triangle(a, b, c, A, B, C){
                if (this->A!=this->C) throw FigureArgumentException("углы A и C не равны");
                if (this->a!=this->c) throw FigureArgumentException("стороны a и c не равны");
        };
void IsoscelesTriangle::getSide()
{
    std::cout << "Равнобедренный треугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl;
}
void IsoscelesTriangle::created(){
    std::cout <<std::format("Равнобедренный треугольник (стороны {}, {}, {}; углы {}, {}, {}) создан", a, b, c, A, B, C)<< std::endl;
}