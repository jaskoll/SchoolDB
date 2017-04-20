#pragma once
#include "Pracownik.h"
class Dyrektor : public Pracownik
{
public:
	string dzial;
	void wyswietl();

	Dyrektor(string i, string n, int w, float p, string dz);
	~Dyrektor();
};

