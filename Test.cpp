//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Test.h"
#include "MainMenu.h"
#include "Results.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
void TForm2::SetSize(int number, int size)
{
	switch(number)
	{
		case 0:
			Button1->Font->Size = size;
			break;
		case 1:
			Button2->Font->Size = size;
			break;
		case 2:
			Button3->Font->Size = size;
			break;
		case 3:
			Button4->Font->Size = size;
			break;
		case 4:
			Button5->Font->Size = size;
			break;
		case 5:
			Button6->Font->Size = size;
			break;
		case 6:
			Button7->Font->Size = size;
			break;
		case 7:
			Button8->Font->Size = size;
			break;
		case 8:
			Button9->Font->Size = size;
			break;
		case 9:
			Button10->Font->Size = size;
			break;
	}
}
//---------------------------------------------------------------------------
void TForm2::SetColor(TColor color)
{
	Form2->Label1->Font->Color = color;
	Form2->Label2->Font->Color = color;
	Form2->Label3->Font->Color = color;
	Form2->Label4->Font->Color = color;
}
//---------------------------------------------------------------------------
void TForm2::SetColor(int i)
{
	switch (Form2->answers[i])
	{
		case 1:
			Form2->Label1->Font->Color = clRed;
			break;
		case 2:
			Form2->Label2->Font->Color = clRed;
			break;
		case 3:
			Form2->Label3->Font->Color = clRed;
			break;
		case 4:
			Form2->Label4->Font->Color = clRed;
			break;
	}
	switch (Form1->listTest[i].GetCorrect())
	{
		case 1:
			Form2->Label1->Font->Color = clGreen;
			break;
		case 2:
			Form2->Label2->Font->Color = clGreen;
			break;
		case 3:
			Form2->Label3->Font->Color = clGreen;
			break;
		case 4:
			Form2->Label4->Font->Color = clGreen;
			break;
	}
}
//---------------------------------------------------------------------------
void TForm2::SetLeft(int left)
{

	Form2->RadioButton1->Left = left;
	Form2->RadioButton2->Left = left;
	Form2->RadioButton3->Left = left;
	Form2->RadioButton4->Left = left;
	Form2->Label1->Left = left + 21;
	Form2->Label2->Left = left + 21;
	Form2->Label3->Left = left + 21;
	Form2->Label4->Left = left + 21;
}
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm2::ButtonNextClick(TObject *Sender)
{
	number++;
	if (number == 9)
		ButtonNext->Caption = "��������� ����";
	else
		ButtonNext->Caption = "��������� ������";
	if (number == 10)
	{
		Form2->Visible = false;
		Form3->Visible = true;
		isComplete = true;
		int correctCounter = 0;
		for (int i = 0; i < 10; i++)
		{
			if (answers[i] == Form1->listTest[i].GetCorrect())
				correctCounter++;
		}
		Form3->LabelScore->Caption = IntToStr(correctCounter);
		if (correctCounter > 8)
		{
			Form3->LabelPass->Caption = "���� ����";
			Form3->Image->Picture->LoadFromFile("yes.jpg");
		}
		else
		{
			Form3->LabelPass->Caption = "���� �� ����";
			Form3->Image->Picture->LoadFromFile("no.jpg");
		}
		number = 0;
	}
	else
		Form1->listTest[number].Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ������";
	number = 0;
	Form1->listTest[number].Show();
	if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ������";
	number = 1;
	Form1->listTest[number].Show();
    if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ������";
	number = 2;
	Form1->listTest[number].Show();
	if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ������";
	number = 3;
	Form1->listTest[number].Show();
	if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ������";
	number = 4;
	Form1->listTest[number].Show();
	if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button6Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ������";
	number = 5;
	Form1->listTest[number].Show();
	if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button7Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ������";
	number = 6;
	Form1->listTest[number].Show();
	if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button8Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ������";
	number = 7;
	Form1->listTest[number].Show();
	if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button9Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ������";
	number = 8;
	Form1->listTest[number].Show();
	if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button10Click(TObject *Sender)
{
	ButtonNext->Caption = "��������� ����";
	number = 9;
	Form1->listTest[number].Show();
	if (isComplete == true)
		SetColor(number);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ButtonAnswerClick(TObject *Sender)
{
	int answer = 0;
	if(RadioButton1->Checked==true)
		answer = 1;
	if(RadioButton2->Checked==true)
		answer = 2;
	if(RadioButton3->Checked==true)
		answer = 3;
	if(RadioButton4->Checked==true)
		answer = 4;
	if (answer != 0)
	{
        SetSize(number, 24);
		answers[number] = answer;
		if (number < 9)
			ButtonNextClick(Sender);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Label1Click(TObject *Sender)
{
	RadioButton1->Checked = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Label2Click(TObject *Sender)
{
	RadioButton2->Checked = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Label3Click(TObject *Sender)
{
	if (RadioButton3->Visible == true)
		RadioButton3->Checked = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Label4Click(TObject *Sender)
{
	if(RadioButton4->Visible == true)
		RadioButton4->Checked = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ButtonBackClick(TObject *Sender)
{
    Form2->Visible = false;
	Form3->Visible = true;
}
//---------------------------------------------------------------------------
