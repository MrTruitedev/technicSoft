//---------------------------------------------------------------------------

#pragma hdrstop

#include "projetTest_FileWriter.h"
#include "projetTest_Item.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
FileWriter *FileWriter;

//Méthodes
//WriteFile nous permet de récuperer les données d'un objectList, puis de les
//écrire dans un fichier xml
void FileWriter::writeFile(TXMLDocument *xmlFile, TObjectList *ObjectList){
	//Récupérer le fichier xml
	towriteXml = xmlFile;
	//Récuperer le tableau d'objet
	ObjList = ObjectList;
	//Boucle parcourt le tableau
	for (int i = 0; i < ObjList->Count; i++) {
		//Récupere l'objet à l'index i
      ptrObjet = (Item *) ObjList->Items[i];
		//Récupère les prop de l'objet
		//Crée un node <Object> dans le fichier
		//Crée un node enfant <entier>
		//Insere la propriété entier dans le node <entier>
		//Crée un node enfant <chaine>
		//Insere la propriété chaine dans le node <chaine>
		//Crée un node enfait <date>
		//Insere la propriété date dans le node <date>
	}



}

