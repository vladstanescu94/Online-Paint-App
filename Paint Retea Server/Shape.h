//---------------------------------------------------------------------------

#ifndef ShapeH
#define ShapeH
#include <vcl.h>
class Shape
{
   protected:
      int x,y , xFinal, yFinal, size;
      TColor color;

   public:
       Shape();
       virtual~Shape();
       Shape(int posX , int posY);
       int getX();
       int getY();
       void setX(int newX);
       void setY(int newY);
       void setColor(TColor newColor);
       void setSize(int newSize);
       int getXfinal();
       int getYfinal();
       void setXfinal(int newX);
       void setYfinal(int newY);
       virtual void draw()=0;

};

//---------------------------------------------------------------------------
#endif
