//---------------------------------------------------------------------------


#pragma hdrstop

#include "Patrat.h"
#include "prima.h"

Patrat::Patrat()
{
   this->xFinal = 0;
   this->yFinal = 0;
}
Patrat::~Patrat()
{

}
Patrat::Patrat(int xFinal, int yFinal)
{
   this->xFinal = xFinal;
   this->yFinal = yFinal;
}


void Patrat::draw()
{
    fMain->Canvas->Pen->Color = this->color;    
    fMain->Canvas->Rectangle(x,y,xFinal,yFinal);
}


//---------------------------------------------------------------------------

#pragma package(smart_init)
