//---------------------------------------------------------------------------

#ifndef projetTest_mainH
#define projetTest_mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Samples.Spin.hpp>
#include "projetTest_Item.h"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.StdActns.hpp>
#include <Xml.Win.msxmldom.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
//---------------------------------------------------------------------------
class TmainForm : public TForm
{
__published:	// Composants gérés par l'EDI
	TMemo *Memo;
	TButton *AddButton;
	TButton *DeleteButton;
	TLabel *Label1;
	TSpinEdit *supprEdit;
	TLabel *Label2;
	TButton *ModButton;
	TPanel *Panel1;
	TActionList *ActionList;
	TMainMenu *MainMenu;
	TOpenDialog *OpenDialog1;
	TSaveDialog *SaveDialog1;
	TAction *Open;
	TAction *Save;
	TMenuItem *Menu1;
	TMenuItem *Ouvrir1;
	TMenuItem *Sauvegarder1;
	TFileOpen *FileOpen1;
	TFileSaveAs *FileSaveAs1;
	TXMLDocument *XMLDocument;
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall DeleteButtonClick(TObject *Sender);
	void __fastcall ModButtonClick(TObject *Sender);

private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TmainForm(TComponent* Owner);
   //Déclaration tableau d'objet
	TObjectList *ObjList;
	//Pointer vers un objet
	Item *ptrObj;
	//Méthode affichage dans le mémo
	void affichageMemo();
	//Méthode affichage formulaire ajout d'objet

	//Méthode Affichage formulaire modification objet
	void modifObjet(Item*);
};
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
extern PACKAGE TmainForm *mainForm;
//---------------------------------------------------------------------------
#endif
