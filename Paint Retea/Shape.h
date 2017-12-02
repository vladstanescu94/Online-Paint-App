//---------------------------------------------------------------------------

#ifndef ShapeH
#define ShapeH
#include <vcl.h>
class Shape
{
   protected:
      int x,y;
      TColor color;

   public:
       Shape();
       virtual~Shape();
       Shape(int posX , int posY);
       int getX();
       int getY();
       void setX(int newX);
       void setY(int newY);
       virtual void draw()=0;


};

//---------------------------------------------------------------------------
#endif
