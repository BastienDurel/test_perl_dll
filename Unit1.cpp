//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "stdio.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	HMODULE lperl = GetModuleHandle("perl522.dll");
	HMODULE lconf = GetModuleHandle("confdll.dll");
	char tmp[2048];
	snprintf(tmp, 2047, "Perl: %p, confdll: %p", lperl, lconf);
	Memo->Text=tmp;
}
//---------------------------------------------------------------------------
