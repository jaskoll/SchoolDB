#pragma once
#include "Wykladowca.h"
#include <vector>
class BazaWykladowca
{
private:
	vector<Wykladowca> wykladowcy;

public:
	void dodaj(Wykladowca w);
	void usun(int n);
	void zapisz();
	void wyswietl();
	void usunbaze();
	BazaWykladowca();
	~BazaWykladowca();
};

