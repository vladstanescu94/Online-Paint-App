//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "prima.h"
#include "Shape.h"
#include "Linie.h"
#include "Cerc.h"
#include "FreeLine.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfMain *fMain;
//---------------------------------------------------------------------------
__fastcall TfMain::TfMain(TComponent* Owner)
        : TForm(Owner)
{


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
}
//---------------------------------------------------------------------------

void __fastcall TfMain::FormMouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
     if(fMain->tLinie->Down)
     {
       Linie *l = new Linie(X,Y);
       //fMain->Canvas->Pen->Color = clRed;  
       l->draw();
       delete l;
     }

     if(fMain->tCerc->Down)
     {

        Cerc *c = new Cerc(X,Y);
        c->draw();
        delete c;
     }
}
//---------------------------------------------------------------------------








