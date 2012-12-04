#include <vcl.h>
#pragma hdrstop
#include <tchar.h>

USEFORM("vokabel.cpp", frmVokabel);
USEFORM("Unit1.cpp", frmVoglet);

WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
    try
    {
        Application->Initialize();
        Application->MainFormOnTaskBar = true;
        Application->Title = "Voglet";
        Application->CreateForm(__classid(TfrmVoglet), &frmVoglet);
        Application->CreateForm(__classid(TfrmVokabel), &frmVokabel);
        Application->Run();
    }
    catch (Exception &exception)
    {
        Application->ShowException(&exception);
    }
    catch (...)
    {
        try
        {
            throw Exception("");
        }
        catch (Exception &exception)
        {
            Application->ShowException(&exception);
        }
    }
    return 0;
}

