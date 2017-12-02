//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "prima.h"
#include "Shape.h"
#include "Linie.h"
#include "Cerc.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfMain *fMain;



//---------------------------------------------------------------------------
__fastcall TfMain::TfMain(TComponent* Owner)
        : TForm(Owner)
{
       Canvas->Pen->Width = 5;

}
//---------------------------------------------------------------------------

void __fastcall TfMain::Quit1Click(TObject *Sender)
{
     exit(0);
}
//---------------------------------------------------------------------------





void __fastcall TfMain::FormMouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        StartX=X;
        StartY=Y;
        Canvas->MoveTo(X,Y);


}
//---------------------------------------------------------------------------

void __fastcall TfMain::FormMouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{

     if(fMain->tLinie->Down)
     {
       Linie *l = new Linie(X,Y);
       l->draw();
       delete l;
     }

     if(fMain->tCerc->Down)
     {

        Cerc *c = new Cerc(X,Y);
        fMain->Canvas->Brush->Style = bsClear;
        c->draw();
        delete c;
     }
}
//---------------------------------------------------------------------------




void __fastcall TfMain::FormMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{

      if(fMain->tPensula->Down)
      {
           if((GetKeyState(VK_LBUTTON) & 0x100) != 0)
           {
             fMain->Canvas->Pen->Color = tColorBox->Selected;
             Canvas->LineTo(X,Y);
           }
      }

}
//---------------------------------------------------------------------------

