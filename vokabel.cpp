#include <vcl.h>
#pragma hdrstop

#include "vokabel.h"

#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmVokabel *frmVokabel;

__fastcall TfrmVokabel::TfrmVokabel(TComponent* Owner)
    : TForm(Owner)
{
}

void TfrmVokabel::setEntry(CEntry *e)
{
    HANDLE hwnd;
    if (e==NULL)
    this->Close();

    this->lblWord->Caption = e->word.c_str();
    this->lblTranslation->Caption = e->translation.c_str();

    this->lblTranslation->Visible = false;

    hwnd=FindWindowExA(NULL,NULL,NULL,"Vokabel");
    SetForegroundWindow((HWND__*)hwnd);
}

void __fastcall TfrmVokabel::FormClick(TObject *Sender)
{
    this->Close();
}

void __fastcall TfrmVokabel::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
    //ESC
    if ( Key == 27 )
        this->Close();
}

void __fastcall TfrmVokabel::btnShowClick(TObject *Sender)
{
    this->lblTranslation->Visible = true;
}

