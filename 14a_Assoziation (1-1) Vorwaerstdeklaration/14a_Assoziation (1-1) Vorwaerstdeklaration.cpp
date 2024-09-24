#include <iostream>
#include "Kunde.h"		// Alle Klassen werden hier aufgeführt. Die Reihenfolge ist nicht 
#include "Auftrag.h"	// beliebig, sollte aber bei typischen Kompilierungsfehlern
						// als erstes geändert werden. Basisklassen sollten zuerst
						// aufgeführt werden. 

using namespace std;

int main()
{
	cout << "1-1-BEZIEHUNG (zweiseitig navigierbar)" << endl << endl;

	Kunde* kunde1 = new Kunde("Maier");
	Auftrag* auftrag1 = new Auftrag("Gipsarbeiten");

	kunde1->setMeinAuftrag(auftrag1); //Kunde Maier gibt einen Gipsarbeiten in Auftrag. Beziehung:  Kunde --> Auftrag 
	kunde1->zeigeAlles();

	auftrag1->setFuerKunde(kunde1); //ODER: meinAuftrag->setFuerKunde(this) in die Methode void Kunde::setMeinAuftrag(Auftrag* init) setzten.
									//Zeile 19 ist ohne des Zeile 16 nicht möglich, da die Klasse Kunde der Klasse Auftrag übergeordent ist.
	auftrag1->zeigeAlles();

	delete kunde1;
	delete auftrag1;

	return 0;
}