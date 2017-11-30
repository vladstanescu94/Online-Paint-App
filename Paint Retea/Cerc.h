//---------------------------------------------------------------------------

#ifndef CercH
#define CercH
#include "Shape.h"

class Cerc : public Shape
{
     protected:
        int xFinal, yFinal;
     public:
       Cerc();
       Cerc(int xFinal, int yFinal);
       ~Cerc();
       virtual void draw();
};

//---------------------------------------------------------------------------
#endif
