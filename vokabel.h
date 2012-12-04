#ifndef vokabelH
#define vokabelH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "entry.h"

class TfrmVokabel : public TForm
{
__published:
    TLabel *lblWord;
    TLabel *lblTranslation;
    TButton *btnShow;
    void __fastcall FormClick(TObject *Sender);
    void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
    void __fastcall btnShowClick(TObject *Sender);
private:
public:
    __fastcall TfrmVokabel(TComponent* Owner);
    void setEntry(CEntry *e);
};

extern PACKAGE TfrmVokabel *frmVokabel;

#endif
