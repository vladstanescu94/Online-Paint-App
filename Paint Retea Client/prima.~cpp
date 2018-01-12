//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "prima.h"
#include "Shape.h"
#include "Linie.h"
#include "Cerc.h"
#include "Patrat.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfMain *fMain;

//---------------------------------------------------------------------------
__fastcall TfMain::TfMain(TComponent* Owner)
        : TForm(Owner)
{
       Canvas->Pen->Width = 3;
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
        AnsiString orig = "Origine" + AnsiString(".") +IntToStr(StartX)+ AnsiString(".") +  IntToStr(StartY);
        cSocket->Socket->SendText(orig);
}
//---------------------------------------------------------------------------

void __fastcall TfMain::FormMouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{

     if(fMain->tLinie->Down)
     {
       Linie *l = new Linie(X,Y);
       AnsiString bufferClient = "Linie" + AnsiString(".") +IntToStr(StartX)+ AnsiString(".") +  IntToStr(StartY)+ AnsiString(".") + IntToStr(X)+ AnsiString(".") + IntToStr(Y) +AnsiString(".")+ ColorToString(tColorBox->Selected)+ AnsiString(".") +  IntToStr(tTrackBar->Position)+ AnsiString(".");
       cSocket->Socket->SendText(bufferClient);
       l->draw();
       delete l;
     }

     if(fMain->tCerc->Down)
     {

        Cerc *c = new Cerc(X,Y);
        fMain->Canvas->Brush->Style = bsClear;
        AnsiString bufferClient = "Cerc" + AnsiString(".") +IntToStr(StartX)+ AnsiString(".") +  IntToStr(StartY)+ AnsiString(".") + IntToStr(X)+ AnsiString(".") + IntToStr(Y) +AnsiString(".")+ ColorToString(tColorBox->Selected)+ AnsiString(".") +  IntToStr(tTrackBar->Position)+ AnsiString(".");
        cSocket->Socket->SendText(bufferClient);
        c->draw();
        delete c;
     }
     if(fMain->tPatrat->Down)
     {

        Patrat *p = new Patrat(X,Y);
        fMain->Canvas->Brush->Style = bsClear;
        AnsiString bufferClient = "Patrat" + AnsiString(".") +IntToStr(StartX)+ AnsiString(".") +  IntToStr(StartY)+ AnsiString(".") + IntToStr(X)+ AnsiString(".") + IntToStr(Y) +AnsiString(".")+ ColorToString(tColorBox->Selected)+ AnsiString(".") +  IntToStr(tTrackBar->Position)+ AnsiString(".");
        cSocket->Socket->SendText(bufferClient);
        p->draw();
        delete p;
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
             AnsiString bufferClient = "Pensula" + AnsiString(".") +IntToStr(StartX)+ AnsiString(".") +  IntToStr(StartY)+ AnsiString(".") + IntToStr(X)+ AnsiString(".") + IntToStr(Y) +AnsiString(".")+ ColorToString(tColorBox->Selected)+ AnsiString(".") +  IntToStr(tTrackBar->Position)+ AnsiString(".");
             cSocket->Socket->SendText(bufferClient);
             Canvas->LineTo(X,Y);
           }
      }
}
//---------------------------------------------------------------------------

void __fastcall TfMain::New1Click(TObject *Sender)
{
    fMain->Repaint();
}
//---------------------------------------------------------------------------


void __fastcall TfMain::tTrackBarChange(TObject *Sender)
{
        fMain->Canvas->Pen->Width = this->tTrackBar->Position;
}
//---------------------------------------------------------------------------



void __fastcall TfMain::FormCreate(TObject *Sender)
{
        SendMessage(tBar->Handle, TB_SETBUTTONWIDTH, 0, MAKELPARAM(0, 40));
        tBar->Width = Screen->Width;
}
//---------------------------------------------------------------------------

void __fastcall TfMain::tCercClick(TObject *Sender)
{
        if(tCerc->Down == true)
        {
           tLinie->Down = false;
           tPatrat->Down = false;
           tPensula->Down = false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TfMain::tLinieClick(TObject *Sender)
{
        if(tLinie->Down == true)
        {
           tCerc->Down = false;
           tPatrat->Down = false;
           tPensula->Down = false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TfMain::tPatratClick(TObject *Sender)
{
         if(tPatrat->Down == true)
        {
           tCerc->Down = false;
           tLinie->Down = false;
           tPensula->Down = false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TfMain::tPensulaClick(TObject *Sender)
{
        if(tPensula->Down == true)
        {
           tCerc->Down = false;
           tPatrat->Down = false;
           tLinie->Down = false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TfMain::cSocketRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
     AnsiString message =Socket->ReceiveText();
     TStringList *str = new TStringList;
     str->Delimiter = '.';
     str->DelimitedText = message;
     if(str->Strings[0] == "Origine")
     {
        int StratX, StratY;
        StratX = StrToInt(str->Strings[1]);
        StratY = StrToInt(str->Strings[2]);
        fMain->Canvas->MoveTo(StratX,StratY);
        return;
     }
      for(int i=2;i<20;i++)
     {
        if(str->Count >= i*7)
        {
               AnsiString tip;
               tip = str->Strings[(i-1)*7];
               int StartX, StartY, X, Y, size;
               StartX = StrToInt(str->Strings[(i-1)*7+1]);
               StartY = StrToInt(str->Strings[(i-1)*7+2]);
               X = StrToInt(str->Strings[(i-1)*7+3]);
               Y = StrToInt(str->Strings[(i-1)*7+4]);
               TColor culoare = StringToColor(str->Strings[(i-1)*7+5]);
               size = StrToInt(str->Strings[(i-1)*7+6]);

               if(tip == "Pensula")
                {
                        fMain->Canvas->Pen->Width = size;
                        fMain->Canvas->Pen->Color = culoare;
                        fMain->Canvas->LineTo(X,Y);
                }

        }else
        {
                break;
        }
     }


     AnsiString tip;
     tip = str->Strings[0];
     int StartX , StartY, X, Y, size;
     StartX = StrToInt(str->Strings[1]);
     StartY = StrToInt(str->Strings[2]);
     X = StrToInt(str->Strings[3]);
     Y = StrToInt(str->Strings[4]);
     TColor culoare = StringToColor(str->Strings[5]);
     size = StrToInt(str->Strings[6]);

     if(tip == "Linie")
     {
        Linie *ln = new Linie(StartX,StartY,X,Y);
        ln->setSize(size);
        ln->setColor(culoare);
        ln->draw();
        delete ln;
     }
     if(tip == "Cerc")
     {
        Cerc *cn = new Cerc(StartX,StartY,X,Y);
        cn->setSize(size);
        cn->setColor(culoare);
        fMain->Canvas->Brush->Style = bsClear;
        cn->draw();
        delete cn;
     }
     if(tip == "Patrat")
     {
        Patrat *pn = new Patrat(StartX,StartY,X,Y);
        pn->setSize(size);
        pn->setColor(culoare);
        fMain->Canvas->Brush->Style = bsClear;
        pn->draw();
        delete pn;
     }
     if(tip == "Pensula")
     {
        fMain->Canvas->Pen->Width = size;
        fMain->Canvas->Pen->Color = culoare;
        fMain->Canvas->LineTo(X,Y);
     }
}
//---------------------------------------------------------------------------

