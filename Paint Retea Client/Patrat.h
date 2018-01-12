//---------------------------------------------------------------------------

#ifndef PatratH
#define PatratH
#include "Shape.h"

class Patrat : public Shape
{
     public:
       Patrat();
       Patrat(int xFinal, int yFinal);
       Patrat (int x , int y , int xFinal, int yFinal);
       ~Patrat();
       virtual void draw();
};
//---------------------------------------------------------------------------
#endif
