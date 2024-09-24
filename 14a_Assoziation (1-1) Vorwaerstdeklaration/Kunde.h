#pragma once
#include <string>
using namespace std;

//#include "Auftrag.h"
class Auftrag; //Vorwärtsdeklaration - "Henne-Ei" Problem, wird mit der Klasse Auftrag wird vorab "nur" Deklariert, damit sie in der Klasse Kunde schon benutzt werden kann.

class Kunde
{
private:
	string kunde;
	Auftrag* meinAuftrag; //Assoziationszeiger

public:
	void setKunde(string);
	void setMeinAuftrag(Auftrag*); //Methode, um Assoziation zu verwalten.

	string getKunde();
	Auftrag* getMeinAuftrag();//Methode, um Assoziation zu verwalten.

	void zeigeAlles();

	Kunde(string);
	~Kunde();
};