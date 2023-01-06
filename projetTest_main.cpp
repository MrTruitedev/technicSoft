//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "projetTest_main.h"
#include "projetTest_addForm.h"
#include "projetTest_Item.h"
#include "projetTest_modForme.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TmainForm *mainForm;
//---------------------------------------------------------------------------




//---------------------------------------------------------------------------
__fastcall TmainForm::TmainForm(TComponent* Owner)
	: TForm(Owner)
{
	//Cr�ation du tableau d'objets
	ObjList = new TObjectList;
	//Initialisation de Memo
	Memo->Text = "";
	//Initialisation du pointer d'objet

}
//---------------------------------------------------------------------------

//  Ajouter objet au tableau
void __fastcall TmainForm::AddButtonClick(TObject *Sender)
{
	//  Pour creer l'objet
	//  => Appel de la forme de creation d'objet
	TAddForme *ptrFormSaisie = new TAddForme(NULL, NULL);
	//Affichage du form d'ajout en modal
	//mainForm n'est plus accessible par l'user
	ptrFormSaisie->ShowModal();
	//Test si un objet a �t� cr��
	if (ptrFormSaisie->ptrItem!=NULL){
		// Ajouter l'objet cr�� au tableau
		ObjList->Add(ptrFormSaisie->ptrItem);
		// Afficher le tableau dans le memo (rafraichir le memo)
		affichageMemo();
	}
	//Suppression du pointer vers TaddForm
	delete ptrFormSaisie;
}
//---------------------------------------------------------------------------

// Supprimer un objet du tableau
void __fastcall TmainForm::DeleteButtonClick(TObject *Sender)
{


	//R�cuperation de la ligne � supprimer
	int supprLine = supprEdit->Value;
	//R�cup�ration du nombre d'entr�es du tableau
	int nbLines = Memo->Lines->Count;
	//Test si le chiffre correspond � un num�ro de ligne
	if (supprLine>= 1 && supprLine<= nbLines) {
		//Acc�s � l'index correspondant dans le tableau (num�ro de ligne -1)
		int index = supprLine-1;
		//Cast du TObject ObjList en objet ptrObj de la classe Item
		Item *ptrObjDel = (Item *) ObjList->Items[index];
		//Suppression de l'objet dans le tableau
		ObjList->Delete(index);
		//Suppression de l'objet � l'adresse du pointer
		delete ptrObjDel;
		}
	//Refresh de l'affichage
	affichageMemo();

}
//---------------------------------------------------------------------------

//Afficher les donn�es du tableau d'objet dans Memo
void TmainForm::affichageMemo(){
	//Initialisation de la string
	String txt = "";
	//Clear du text de Memo
	Memo->Text = "";
	//R�cup�ration du nombre d'entr�es
	int itemCount = ObjList->Count;
	//Boucle parcourt le tableau
		for(int i = 0; i < itemCount; i++){
			//R�cupere l'objet
			//Cast du TObject ObjList en objet ptrObj de la classe Item
			ptrObj = (Item *) ObjList->Items[i];
			//R�cupere les propri�t�s de l'objet
			String entier = ptrObj->getEntier();
			String index = i+1;
			//Concatene les propri�t�s dans string
         //TODO -> Cr�er une methode de concat�nation dans la classe Item
			txt = "[" + index + "]" + " => " + entier + " - " + ptrObj->getChaine() + " - " + ptrObj->getDate() + "\n";
			//Affiche string dans m�mo
			Memo->Lines->Append(txt);
		}
};

//---------------------------------------------------------------------------

//Modifier un objet du tableau
void __fastcall TmainForm::ModButtonClick(TObject *Sender){

	//R�cup�ration de la ligne � modifier
	int modLine = supprEdit->Value;
	//R�cup�ration du nombre d'entr�es du tableau
	int nbLines = Memo->Lines->Count;
	//Test si la ligne existe et correspond � une ligne
	if (modLine>= 1 && modLine<= nbLines) {
	//Acc�s � l'objet correspondant dans le tableau
		int index = modLine-1;
		//Cast du TObject point� par ptrList en objet point� par ptrItem de la classe Item
		ptrObj = (Item *) ObjList->Items[index];
		modifObjet(ptrObj);
		//Refresh
		affichageMemo();
	}
}
//Afficher formulaire de modification
void TmainForm::modifObjet(Item* ptrObjet){
	//Appel du form de modif d'objet
	TAddForme *ptrFormSaisie = new TAddForme(NULL, ptrObjet);
	//Affichage du form de modif en modal
	ptrFormSaisie->ShowModal();
   delete ptrFormSaisie;
}

