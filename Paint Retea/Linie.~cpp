//---------------------------------------------------------------------------


#pragma hdrstop

#include "Linie.h"
#include "prima.h"

Linie::Linie()
{
  this->xFinal = 0;
  this->yFinal = 0;
}
Linie::~Linie()
{

}
Linie::Linie( int xFinal, int yFinal)
{
   this->xFinal = xFinal;
   this->yFinal = yFinal;
}
Linie::Linie(int x, int y, int xFinal, int yFinal) : Shape(x,y)
{
   this->xFinal = xFinal;
   this->yFinal = yFinal;
}
int Linie::getXfinal()
{
   return xFinal;
}
int Linie::getYfinal()
{
   return yFinal;
}
void Linie::setXfinal(int newX)
{
   this->xFinal = newX;
}
void Linie::setYfinal(int newY)
{
   this->yFinal = newY;
}
void Linie::draw()
{
      
  fMain->Canvas->MoveTo(x,y);
  fMain->Canvas->LineTo(xFinal,yFinal);
}
//---------------------------------------------------------------------------

#pragma package(smart_init)
