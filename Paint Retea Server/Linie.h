//---------------------------------------------------------------------------

#ifndef LinieH
#define LinieH
#include "Shape.h"

class Linie : public Shape
{

    public:
      Linie();
      ~Linie();
      Linie( int xFinal, int yFinal);
      Linie (int x , int y , int xFinal, int yFinal);
      virtual void draw();

};
//---------------------------------------------------------------------------
#endif
