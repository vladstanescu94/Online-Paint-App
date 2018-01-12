//---------------------------------------------------------------------------

#ifndef CercH
#define CercH
#include "Shape.h"


class Cerc : public Shape
{
     public:
       Cerc();
       Cerc(int xFinal, int yFinal);
       Cerc (int x , int y , int xFinal, int yFinal);
       ~Cerc();
       virtual void draw();
};

//---------------------------------------------------------------------------
#endif
