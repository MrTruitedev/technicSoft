//---------------------------------------------------------------------------

#ifndef projetTest_modFormeH
#define projetTest_modFormeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Samples.Spin.hpp>
#include "projetTest_Item.h"
//---------------------------------------------------------------------------
class TModForme : public TForm
{
__published:	// Composants gérés par l'EDI
	TLabel *Label1;
	TSpinEdit *IntInput;
	TLabel *label2;
	TEdit *StringInput;
	TLabel *Label3;
	TDateTimePicker *DateInput;
	TButton *AddButton;
	TButton *UndoButton;
	void __fastcall ModButtonClick(TObject *Sender);
	void __fastcall UndoButtonClick(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TModForme(TComponent* Owner);
   //Pointer vers l'item modifié
   Item *modObj;
};
//---------------------------------------------------------------------------
extern PACKAGE TModForme *ModForme;
//---------------------------------------------------------------------------
#endif
