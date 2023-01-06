//---------------------------------------------------------------------------

#ifndef projetTest_addFormH
#define projetTest_addFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <Vcl.Mask.hpp>
#include "projetTest_Item.h"
//---------------------------------------------------------------------------
class TAddForme : public TForm
{
__published:	// Composants gérés par l'EDI
	TLabel *Label1;
	TLabel *Label2;
	TEdit *StringInput;
	TLabel *Label3;
	TButton *AddButton;
	TButton *UndoButton;
	TDateTimePicker *DateInput;
	TSpinEdit *IntInput;
	TButton *ModButton;
	void __fastcall AddButtonClick(TObject *Sender);
//Évènement click Modifier
void __fastcall ModButtonClick(TObject *Sender);

	void __fastcall UndoButtonClick(TObject *Sender);
private:	// Déclarations utilisateur

public:		// Déclarations utilisateur
	 //Création d'un pointer vers l'objet créé dans le formulaire
    //A supprimer dans le form principal
	 Item *ptrItem;
	 //Pointer vers l'objet à modifier
    Item* modObj;
	__fastcall TAddForme(TComponent* Owner, Item* ptrItem);
};
//---------------------------------------------------------------------------
//extern PACKAGE TAddForm *AddForm;
//---------------------------------------------------------------------------
#endif
