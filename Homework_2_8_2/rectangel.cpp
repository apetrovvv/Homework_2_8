#include "rectangle.h"

Rectangle::Rectangle(int a, int b) : Quadriangle(a, b, a, b, 90, 90, 90, 90) {};

Rectangle::Rectangle(int a, int b, int c, int d, 
        int A, int B, int C, int D) : Quadriangle(a, b, c, d, A, B, C, D){
            if(this->a!=this->c && this->b!=this->d) throw FigureArgumentException("стороны a,c и b,d попарно не равны");
            if(this->A!=90 && this->B!=90 && this->C!=90 && this->D!=90) throw FigureArgumentException("не все углы равны 90");
        }

void Rectangle::getSide()
{
    std::cout << "Прямоугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl;
}
void Rectangle::created(){
    std::cout <<std::format("Прямоугольник (стороны {}, {}, {}, {}; углы {}, {}, {}, {}) создан", a, b, c, d, A, B, C, D)<< std::endl;
    }