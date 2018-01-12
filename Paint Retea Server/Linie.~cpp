//---------------------------------------------------------------------------


#pragma hdrstop

#include "Linie.h"
#include "prima.h"
#pragma package(smart_init)

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
Linie::Linie(int x , int y , int xFinal, int yFinal)
{
     this->x = x;
     this->y = y;
     this->xFinal = xFinal;
     this->yFinal = yFinal;
}


void Linie::draw()
{

  fMain->Canvas->MoveTo(x,y);
  fMain->Canvas->Pen->Color = this->color;
  fMain->Canvas->Pen->Width = this->size;
  fMain->Canvas->LineTo(xFinal,yFinal);
}
//---------------------------------------------------------------------------


