//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Test.h"
#include "MainMenu.h"
#include "Results.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm3::ButtonExitClick(TObject *Sender)
{
    Form1->Close();
	Form2->Close();
	Form3->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ButtonMenuClick(TObject *Sender)
{
	Form3->Visible = false;
	Form1->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ButtonResultClick(TObject *Sender)
{
	Form3->Visible = false;
	Form2->Visible = true;
	Form2->ButtonNext->Enabled = false;
	Form2->ButtonAnswer->Enabled = false;
	Form2->ButtonBack->Visible = true;
	Form2->SetColor(9);
}
//---------------------------------------------------------------------------
