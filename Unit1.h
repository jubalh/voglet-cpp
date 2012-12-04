#ifndef Unit1H
#define Unit1H

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "voglet.h"

class TfrmVoglet : public TForm
{
__published:
    TTimer *Timer1;
    TButton *btnStart;
    TButton *btnStop;
    TEdit *edtTime;
    TRadioButton *rbSec;
    TRadioButton *rbMin;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall btnStartClick(TObject *Sender);
    void __fastcall btnStopClick(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
private:
    CVoglet *v;
public:
    __fastcall void switchButtons(void);
    __fastcall TfrmVoglet(TComponent* Owner);
};

extern PACKAGE TfrmVoglet *frmVoglet;

#endif

