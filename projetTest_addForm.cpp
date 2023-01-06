//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "projetTest_addForm.h"
#include "projetTest_Item.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAddForme *AddForme;
//---------------------------------------------------------------------------
__fastcall TAddForme::TAddForme(TComponent* Owner, Item* ptrItem)
	: TForm(Owner)
{
	modObj= ptrItem;
	if (modObj!=NULL) {
		//R�cup�ration des propri�t�s de l'objet
		int tomodInt = modObj->getEntier();
		String tomodStr = modObj->getChaine();
		TDate tomodDate = modObj->getDate();
		//Insertion des propri�t�s dans les champs
		IntInput->Value = tomodInt;
		StringInput->Text = tomodStr;
		DateInput->Date = tomodDate;

		//Changement du titre du formulaire
      AddForme->Caption = "Formulaire de modification";

		//Affichage des labels de modification
		Label1->Caption = "Modifiez le nombre";
		Label2->Caption = "Modifiez le texte";
		Label3->Caption = "Modifiez la date";

		//Changement de bouton
		ModButton->Visible=True;
      AddButton->Visible=False;
	}
}
//---------------------------------------------------------------------------

	//�v�nement click sur Ajouter
	void __fastcall TAddForme::AddButtonClick(TObject *Sender)
	{
		//Click sur Ajouter
		//R�cup�re les donn�es saisies dans les champs
		int intValue = IntInput->Value;
		String stringText = StringInput->Text;
		String dateValue = DateInput->Date;
		//Cr�e l'objet
		ptrItem = new Item(intValue, stringText, dateValue);
		//Ferme le formulaire
		Close();
	}

//---------------------------------------------------------------------------

//�v�nement click sur Modifier
void __fastcall TAddForme::ModButtonClick(TObject *Sender)
{
	//Click sur Modifier
	int newInt = IntInput->Value;
	String newStr = StringInput->Text;
	TDate newDate = DateInput->Date;
	//Modification de l'objet
	modObj->setEntier(newInt);
	modObj->setChaine(newStr);
	modObj->setDate(newDate);
	//Close
	Close();
}
//---------------------------------------------------------------------------
//�v�nement click sur Annuler
void __fastcall TAddForme::UndoButtonClick(TObject *Sender)
{
	//Ferme le formulaire
   Close();
}
//---------------------------------------------------------------------------


