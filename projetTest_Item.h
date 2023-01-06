//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <Vcl.Mask.hpp>
#ifndef projetTest_ItemH
#define projetTest_ItemH

//---------------------------------------------------------------------------
class Item :public TObject
{

 private:
		int entier ;
		String chaine ;
		TDate date ;
 public:
	//Constructeur
	Item(int, String, TDate);
	//Getter
	int getEntier();
	String getChaine();
	TDate getDate();
	//Setter
	void setEntier(int);
	void setChaine(String);
	void setDate(TDate);

};
#endif
