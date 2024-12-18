#pragma once
#include <iostream>
#include "figureArgExpt.h"
#include <format>

class Figure{
    protected:
        virtual void created();
        int side;
    public:
        Figure(int side = 0);
        virtual void getSide();
};