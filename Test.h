//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#ifndef TestH
#define TestH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
	public:
		int number;
		int answers[10];
		bool isComplete;
		void SetSize(int number, int size);
		void SetColor(TColor color);
		void SetColor(int i);
		void SetLeft(int left);
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TButton *Button9;
	TButton *Button10;
	TImage *Image;
	TLabel *LabelQuestion;
	TRadioButton *RadioButton1;
	TLabel *Label1;
	TRadioButton *RadioButton2;
	TLabel *Label2;
	TRadioButton *RadioButton3;
	TLabel *Label3;
	TRadioButton *RadioButton4;
	TLabel *Label4;
	TButton *ButtonAnswer;
	TButton *ButtonNext;
    TButton *ButtonBack;
	void __fastcall ButtonNextClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall ButtonAnswerClick(TObject *Sender);
	void __fastcall Label1Click(TObject *Sender);
	void __fastcall Label2Click(TObject *Sender);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall Label4Click(TObject *Sender);
	void __fastcall ButtonBackClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
