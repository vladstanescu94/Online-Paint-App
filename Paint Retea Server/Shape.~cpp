//---------------------------------------------------------------------------


#pragma hdrstop

#include "Shape.h"
#include "prima.h"
#include <vcl.h>
#pragma package(smart_init)

Shape::Shape()
{
   this->x = fMain->getX();
   this->y = fMain->getY();
   this->color = fMain->tColorBox->Selected;
   this->size = fMain->tTrackBar->Position;


}
Shape::~Shape()
{

}
Shape::Shape(int posX, int posY)
{
   this->x = posX;
   this->y = posY;


}

int Shape::getX()
{
   return this->x;
}
int Shape::getY()
{
   return this->y;
}
void Shape::setX(int newX)
{
   this->x = newX;
}
void Shape::setY(int newY)
{
   this->y = newY;
}
void Shape::setColor(TColor newColor)
{
   this->color = newColor;
}
void Shape::setSize(int newSize)
{
   this->size = newSize;
}
int Shape::getXfinal()
{
   return xFinal;
}
int Shape::getYfinal()
{
   return yFinal;
}
void Shape::setXfinal(int newX)
{
   this->xFinal = newX;
}
void Shape::setYfinal(int newY)
{
   this->yFinal = newY;
}
//void Shape::draw() {
//}

//---------------------------------------------------------------------------


