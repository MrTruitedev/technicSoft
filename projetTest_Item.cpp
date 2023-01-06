//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "projetTest_Item.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
Item *Item;
//Constructeur

Item::Item(int i, String c, TDate d){
	entier = i;
	chaine = c;
	date = d;
}

//Getter

int Item::getEntier(){
	return entier;
}

String Item::getChaine(){
	return chaine;
}

TDate Item::getDate(){
	return date;
}

//Setter

void Item::setEntier(int i){
	entier = i;
}

void Item::setChaine(String c){
	chaine = c;
}

void Item::setDate(TDate d){
	date = d;
}




