#include "figure.h"
#include "triangle.h"
#include "rightTriangle.h"
#include "isoscelesTriangle.h"
#include "equilateralTriangle.h"
#include "quadriangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

void printInfo(Figure* figure){
    figure->getSide();
    std::cout << std::endl;
}

int main(){
    try
    {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        triangle.created();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        EquilateralTriangle equilateralTriangle(30, 30, 31, 60, 60, 60);
        equilateralTriangle.created();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        IsoscelesTriangle isoscelesTriangle(10, 20, 15, 60, 60, 60);
        isoscelesTriangle.created();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        RightTriangle rightTriangle(10, 20, 30, 50, 60, 90);
        rightTriangle.created();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Quadriangle quadriangle(10, 20, 30, 40, 50, 60, 70, 80);
        quadriangle.created();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        rectangle.created();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Square square(20, 20, 20, 20, 90, 90, 90, 90);
        square.created();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Parallelogram parallelogram(20, 30, 20, 30, 45, 90, 45, 90);
        parallelogram.created();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);
        rhombus.created();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
}
