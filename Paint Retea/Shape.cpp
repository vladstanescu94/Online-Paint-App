//---------------------------------------------------------------------------


#pragma hdrstop

#include "Shape.h"
#include "prima.h"
#include <vcl.h>

Shape::Shape()
{
   this->x = fMain->getX();
   this->y = fMain->getY();
   this->color = fMain->tColorBox->Selected;


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

#pragma package(smart_init)
