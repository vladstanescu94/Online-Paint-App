//---------------------------------------------------------------------------


#pragma hdrstop

#include "Shape.h"
#include "prima.h"

Shape::Shape()
{
   this->x = fMain->getX();
   this->y = fMain->getY();
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
//void Shape::draw() {
//}

//---------------------------------------------------------------------------

#pragma package(smart_init)
