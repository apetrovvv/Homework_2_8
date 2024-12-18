#include "quadriangle.h"

class Rectangle: public Quadriangle{
    public:
        Rectangle(int a, int b);
        Rectangle(int a, int b, int c, int d, 
        int A, int B, int C, int D);
        void getSide();
        void created() override;
};