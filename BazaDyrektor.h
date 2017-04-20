#pragma once
#include "Dyrektor.h"
#include <vector>
class BazaDyrektor
{
private:
	vector<Dyrektor> dyrektorowie;
public:
	void dodaj(Dyrektor d);
	void usun(int n);
	void zapisz();
	void wyswietl();
	void usunbaze();
	BazaDyrektor();
	~BazaDyrektor();
};

