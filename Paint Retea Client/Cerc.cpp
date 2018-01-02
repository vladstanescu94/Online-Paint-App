//---------------------------------------------------------------------------


#pragma hdrstop

#include "Cerc.h"
#include "prima.h"
#pragma package(smart_init)

Cerc::Cerc()
{
   this->xFinal = 0;
   this->yFinal = 0;
}
Cerc::~Cerc()
{

}
Cerc::Cerc(int xFinal, int yFinal)
{
   this->xFinal = xFinal;
   this->yFinal = yFinal;
}
Cerc::Cerc(int x , int y , int xFinal, int yFinal)
{
     this->x = x;
     this->y = y;
     this->xFinal = xFinal;
     this->yFinal = yFinal;
}


void Cerc::draw()
{
    fMain->Canvas->Pen->Color = this->color;    
    fMain->Canvas->Ellipse(x,y,xFinal,yFinal);
}

//---------------------------------------------------------------------------


