//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "projetTest_modForme.h"
#include "projetTest_main.h"
#include "projetTest_Item.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TModForme *ModForme;
//---------------------------------------------------------------------------
__fastcall TModForme::TModForme(TComponent* Owner)
	: TForm(Owner)
{
//	//R�cup�ration de l'objet
//	modObj = mainForm->ptrObj;
//
//	//Test si l'objet � modifier existe
//	if (modObj!=NULL) {
//
//	}
//
//
//


}
//---------------------------------------------------------------------------
void __fastcall TModForme::ModButtonClick(TObject *Sender)
{
	//R�cup�ration des valeurs

   //Suppression du pointer modObj
	//delete modObj;
}
//---------------------------------------------------------------------------
void __fastcall TModForme::UndoButtonClick(TObject *Sender)
{
	//Close
   Close();
}
//---------------------------------------------------------------------------
