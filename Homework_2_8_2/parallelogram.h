#include "quadriangle.h"

class Parallelogram: public Quadriangle{
    public:
        Parallelogram(int a, int b, int A, int B);
        Parallelogram(int a, int b, int c, int d, 
        int A, int B, int C, int D);
        void getSide() override;
        void created() override;
};