#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadriangle(a, b, a, b, A, B, A, B) {};
Parallelogram::Parallelogram(int a, int b, int c, int d, 
        int A, int B, int C, int D) : Quadriangle(a, b, c, d, A, B, C, D){
            if(this->a!=this->c && this->b!=this->d) throw FigureArgumentException("стороны попарно не равны");
            if(this->A!=this->C && this->B!=this->D) throw FigureArgumentException("углы попарно не равны");
        }

void Parallelogram::getSide()
{
    std::cout << "Параллелограмм:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl;
}
void Parallelogram::created()
{
    std::cout <<std::format("Параллелограмм (стороны {}, {}, {}, {}; углы {}, {}, {}, {}) создан", a, b, c, d, A, B, C, D)<< std::endl;
}