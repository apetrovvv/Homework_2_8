#include "quadriangle.h"

class Square: public Quadriangle{
    public:
        Square(int a);
        Square(int a, int b, int c, int d, 
        int A, int B, int C, int D);
        void getSide() override;
        void created() override;
};
