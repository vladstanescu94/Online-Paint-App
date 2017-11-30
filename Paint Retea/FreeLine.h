//---------------------------------------------------------------------------

#ifndef FreeLineH
#define FreeLineH
#include "Shape.h"


class FreeLine : public Shape
{

   public:

    FreeLine();
    FreeLine(int x, int y);
    ~FreeLine();
    virtual void draw();

};

//---------------------------------------------------------------------------
#endif
