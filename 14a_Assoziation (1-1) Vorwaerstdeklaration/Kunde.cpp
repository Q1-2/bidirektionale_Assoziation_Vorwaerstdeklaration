#include "Kunde.h"
#include "Auftrag.h"
#include <iostream>

using namespace std;


Kunde::Kunde(string n_init)
{
	kunde = n_init;
	meinAuftrag = nullptr;
}

Kunde::~Kunde()
{
	meinAuftrag = nullptr;
}

void Kunde::setKunde(string init)
{
	kunde = init;
}

void Kunde::setMeinAuftrag(Auftrag* init)
{
	meinAuftrag = init;
	meinAuftrag->setFuerKunde(this); //Damit weiß der Auftrag auch von seinem Kunden.
}

string Kunde::getKunde()
{
	return kunde;
}

Auftrag* Kunde::getMeinAuftrag()
{
	return meinAuftrag;
}

void Kunde::zeigeAlles()
{
	cout << "Kunde --> Auftrag" << endl;
	cout << "Kunde: " << kunde << endl;
	if (meinAuftrag != nullptr) {
		cout << "Auftrag: " << meinAuftrag->getAuftrag() << endl; // Annahme, dass getAuftrag() existiert
	}
	else {
		cout << "Auftrag: Kein Auftrag vorhanden." << endl;
	}

	cout << endl;
}