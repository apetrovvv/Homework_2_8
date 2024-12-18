#include "quadriangle.h"

class Rhombus: public Quadriangle{
    public:
        Rhombus(int a, int A, int B);
        Rhombus(int a, int b, int c, int d, 
        int A, int B, int C, int D);
        void getSide() override;
        void created() override;
};
