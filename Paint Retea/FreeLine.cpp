//---------------------------------------------------------------------------


#pragma hdrstop

#include "FreeLine.h"
#include "Shape.h"
#include "prima.h"

FreeLine::FreeLine()
{
  this->x = 0;
  this->y = 0;

}
FreeLine::FreeLine(int x, int y)
{
  this->x = x;
  this->y = y;
}
FreeLine::~FreeLine(){}
void FreeLine::draw()
{
   
   fMain->Canvas->Pixels[x][y] = clBlack;

}

//---------------------------------------------------------------------------

#pragma package(smart_init)
