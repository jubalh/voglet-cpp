#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "vokabel.h"

TfrmVoglet *frmVoglet;

__fastcall TfrmVoglet::TfrmVoglet(TComponent* Owner)
    : TForm(Owner)
{
}

void __fastcall TfrmVoglet::FormCreate(TObject *Sender)
{
    Timer1->Enabled = FALSE;
    rbMin->Checked = TRUE;
    btnStop->Enabled = FALSE;
    v = new CVoglet("file.xml");
}

void __fastcall TfrmVoglet::btnStartClick(TObject *Sender)
{
    int n=1;
    if (rbMin->Checked)
        n=60;
    Timer1->Interval = StrToInt(edtTime->Text)*1000*n;
    Timer1->Enabled = TRUE;
    switchButtons();
}

void __fastcall TfrmVoglet::btnStopClick(TObject *Sender)
{
    Timer1->Enabled = FALSE;
    switchButtons();
}

void __fastcall TfrmVoglet::Timer1Timer(TObject *Sender)
{
   Timer1->Enabled = FALSE;

   CEntry *e = v->getEntryByRandom();
   frmVokabel->setEntry(e);
   frmVokabel->Show();
   this->Visible = FALSE;

   while(frmVokabel->Visible)
    Application->ProcessMessages();

   this->Visible = TRUE;
   Timer1->Enabled = TRUE;
}

void __fastcall TfrmVoglet::switchButtons(void)
{
   btnStop->Enabled = !btnStop->Enabled;
   btnStart->Enabled = !btnStart->Enabled;
}

