//---------------------------------------------------------------------------

#ifndef primaH
#define primaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <ExtCtrls.hpp>
#include <ScktComp.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TfMain : public TForm
{
__published:	// IDE-managed Components
        TToolBar *tBar;
        TMainMenu *mMenu;
        TMenuItem *File1;
        TMenuItem *Edit1;
        TMenuItem *New1;
        TMenuItem *Save1;
        TMenuItem *N1;
        TMenuItem *Quit1;
        TMenuItem *Undo1;
        TMenuItem *Redo1;
        TToolButton *tLinie;
        TToolButton *tCerc;
        TToolButton *tPatrat;
        TColorBox *tColorBox;
        TToolButton *tPensula;
        TToolButton *tSeparator1;
        TToolButton *tSeparator2;
        TTrackBar *tTrackBar;
        TToolButton *tSeparator3;
        TToolButton *tSeparator4;
        TToolButton *tSeparator5;
        TImageList *tImageList;
        TServerSocket *sSocket;
        void __fastcall Quit1Click(TObject *Sender);
        void __fastcall FormMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall FormMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall New1Click(TObject *Sender);
        void __fastcall tTrackBarChange(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall tCercClick(TObject *Sender);
        void __fastcall tLinieClick(TObject *Sender);
        void __fastcall tPatratClick(TObject *Sender);
        void __fastcall tPensulaClick(TObject *Sender);
        void __fastcall sSocketClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
private:
     int StartX, StartY;// User declarations
public:
      int getX(){return StartX;}
      int getY(){return StartY;}
// User declarations
        __fastcall TfMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfMain *fMain;
//---------------------------------------------------------------------------
#endif
