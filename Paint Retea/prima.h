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
        void __fastcall Quit1Click(TObject *Sender);
        void __fastcall FormMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall FormMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall New1Click(TObject *Sender);
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
