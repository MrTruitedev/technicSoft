//---------------------------------------------------------------------------
#include <System.Actions.hpp>
#include <System.Classes.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Xml.Win.msxmldom.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include "projetTest_Item.h"
#ifndef projetTest_FileWriterH
#define projetTest_FileWriterH

//---------------------------------------------------------------------------
class FileWriter {
 public:
 	TXMLDocument *xmlFile;
	TXMLDocument *towriteXml;
	TObjectList *ObjList;
   Item *ptrObjet;
	//Méthodes
	//WriteFile
	void writeFile(TXMLDocument *, TObjectList *);



};
#endif
