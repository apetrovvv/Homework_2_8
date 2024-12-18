#include "equilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {};
EquilateralTriangle::EquilateralTriangle(int a, int b, int c, 
            int A, int B, int C) : Triangle(a, b, c, A, B, C){
                if((this->c!=this->a) && (this->b!=this->a)) throw FigureArgumentException("стороны треугольника не равны между собой");
                if(this->A!=60 && this->B!=60 && this->C!=60) throw FigureArgumentException("не все углы треугольника равны 60");
        };
void EquilateralTriangle::created(){
    std::cout <<std::format("Равносторонний треугольник (стороны {}, {}, {}; углы {}, {}, {}) создан", a, b, c, A, B, C) << std::endl;
}
void EquilateralTriangle::getSide()
{
    std::cout << "Равносторонний треугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl;
};