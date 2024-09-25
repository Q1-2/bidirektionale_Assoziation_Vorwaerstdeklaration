#include "Kunde.h"
#include "Auftrag.h"
#include <iostream>

using namespace std;


Kunde::Kunde(string n_init)
{
	name = n_init;
	meinAuftrag = nullptr;
}

Kunde::~Kunde()
{
	meinAuftrag = nullptr;
}

void Kunde::setName(string init)
{
	name = init;
}

void Kunde::setMeinAuftrag(Auftrag* init)
{
	meinAuftrag = init;
	meinAuftrag->setFuerKunde(this); //Damit weiﬂ der Auftrag auch von seinem Kunden.
}

string Kunde::getName()
{
	return name;
}

Auftrag* Kunde::getMeinAuftrag()
{
	return meinAuftrag;
}

void Kunde::zeigeAlles()
{
	cout << "Kunde --> Auftrag" << endl;
	cout << "Kunde: " << name << endl;
	if (meinAuftrag != nullptr) {
		cout << "Auftrag: " << meinAuftrag->getAuftrag() << endl; // Annahme, dass getAuftrag() existiert
	}
	else {
		cout << "Auftrag: Kein Auftrag vorhanden." << endl;
	}

	cout << endl;
}