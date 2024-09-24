#pragma once
#include <string>
using namespace std;

#include "Kunde.h"

//class Kunde; //NEU: Sollte eine Klasse in einer Klasse aufgerufen werden, kann die 
				// aufgerufene Klasse (hier Auftrag) als „Vorwärtsdeklaration“ hier ein-
				// gefühgt werden.

class Auftrag
{
private:
	string auftrag;
	Kunde* fuerKunde; //Assoziationszeiger

public:
	void setAuftrag(string);
	void setFuerKunde(Kunde*); //Methode, um Assoziation zu verwalten.

	string getAuftrag();
	Kunde* getFuerKunde(); //Methode, um Assoziation zu verwalten.

	void zeigeAlles();

	Auftrag(string);
	~Auftrag();
};