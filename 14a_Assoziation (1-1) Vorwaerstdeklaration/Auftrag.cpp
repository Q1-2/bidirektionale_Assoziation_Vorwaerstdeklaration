#include "Auftrag.h"
#include "Kunde.h"
#include <iostream>

using namespace std;

Auftrag::Auftrag(string n_init)
{
	auftrag = n_init;
	fuerKunde = nullptr; //Initialisierung - Kein Kunde.
}

Auftrag::~Auftrag()
{
	fuerKunde = nullptr;
}

void Auftrag::setAuftrag(string n_init)
{
	auftrag = n_init;
}

string Auftrag::getAuftrag()
{
	return auftrag;
}

Kunde* Auftrag::getFuerKunde()
{
	return fuerKunde;
}

void Auftrag::setFuerKunde(Kunde* a_init)
{
	fuerKunde = a_init;
	//fuerKunde->setMeinAuftrag(this); //Führt zu einer Endlos-Rekursion, da Kunde und Auftrag die gleiche Beziehungsverbindung benutzen möchten. 
}

void Auftrag::zeigeAlles()
{
	cout << "Auftrag --> Kunde" << endl;
	cout << "Auftrag: " << auftrag << endl;
	if (fuerKunde != nullptr) {
		cout << "Auftrag: " << fuerKunde->getName() << endl; // Annahme, dass getAuftrag() existiert
	}
	else {
		cout << "Auftrag: Kein Auftrag vorhanden." << endl;
	}
	
	cout << endl;
}