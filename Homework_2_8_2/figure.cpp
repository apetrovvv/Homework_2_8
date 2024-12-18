#include "figure.h"

Figure::Figure(int side){
            this->side = side;
        }

void Figure::created(){
    std::cout << "Фигура создана"<< std::endl;
}        

void Figure::getSide(){
            std::cout << "Фигура: "<< side << std::endl;
}