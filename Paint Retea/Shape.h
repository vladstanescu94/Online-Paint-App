//---------------------------------------------------------------------------

#ifndef ShapeH
#define ShapeH
class Shape
{
   protected:
      int x,y;
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
