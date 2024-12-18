#include "rightTriangle.h"

RightTriangle::RightTriangle(int a, int b, int c, 
            int A, int B) : Triangle(a, b, c, A, B, 90){};

RightTriangle::RightTriangle(int a, int b, int c, 
            int A, int B, int C) : Triangle(a, b, c, A, B, C){
                if(this->C!=90) throw FigureArgumentException("угол C не равен 90");
        };
            
void RightTriangle::getSide()
{
    std::cout << "Прямоугольный треугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl;
}
void RightTriangle::created(){
                std::cout <<std::format("Прямоугольный треугольник (стороны {}, {}, {}; углы {}, {}, {}) создан", a, b, c, A, B, C)<< std::endl;
}