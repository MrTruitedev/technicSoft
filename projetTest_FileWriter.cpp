//---------------------------------------------------------------------------

#pragma hdrstop

#include "projetTest_FileWriter.h"
#include "projetTest_Item.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
FileWriter *FileWriter;

//M�thodes
//WriteFile nous permet de r�cuperer les donn�es d'un objectList, puis de les
//�crire dans un fichier xml
void FileWriter::writeFile(TXMLDocument *xmlFile, TObjectList *ObjectList){
	//R�cup�rer le fichier xml
	towriteXml = xmlFile;
	//R�cuperer le tableau d'objet
	ObjList = ObjectList;
	//Boucle parcourt le tableau
	for (int i = 0; i < ObjList->Count; i++) {
		//R�cupere l'objet � l'index i
      ptrObjet = (Item *) ObjList->Items[i];
		//R�cup�re les prop de l'objet
		//Cr�e un node <Object> dans le fichier
		//Cr�e un node enfant <entier>
		//Insere la propri�t� entier dans le node <entier>
		//Cr�e un node enfant <chaine>
		//Insere la propri�t� chaine dans le node <chaine>
		//Cr�e un node enfait <date>
		//Insere la propri�t� date dans le node <date>
	}



}

