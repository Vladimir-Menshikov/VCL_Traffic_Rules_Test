//---------------------------------------------------------------------------
#include <vcl.h>
#include <jpeg.hpp>
#include "MainMenu.h"
#include "Test.h"
#include "Results.h"
#pragma hdrstop
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	list.load();
	ImageBG->Picture->LoadFromFile("Background.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonExitClick(TObject *Sender)
{
	Form1->Close();
	Form2->Close();
	Form3->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonStartClick(TObject *Sender)
{
	Form1->Visible = false;
	Form2->Visible = true;
	Form2->ButtonNext->Enabled = true;
	Form2->ButtonAnswer->Enabled = true;
	Form2->ButtonBack->Visible = false;
	Form2->ButtonNext->Caption = "��������� ������";
	for (int i = 0; i < 10; i++)
	{
		Form2->SetSize(i, 12);
	}
	Form2->SetColor(clBlack);
	Form2->isComplete = false;
	for (int i = 0; i < 10; i++)
	{
        Form2->answers[i] = 0;
	}
	listTest.clear();
    listTest.fill(Form1->list);
	Form2->number = 0;
	listTest[Form2->number].Show();
}
//---------------------------------------------------------------------------


