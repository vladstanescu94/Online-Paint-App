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


void Linie::draw()
{

  fMain->Canvas->MoveTo(x,y);
  fMain->Canvas->Pen->Color = this->color;
  fMain->Canvas->LineTo(xFinal,yFinal);
}
//---------------------------------------------------------------------------

#pragma package(smart_init)
