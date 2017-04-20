#pragma once
#include "Pracownik.h"
class Wykladowca : public Pracownik
{
public:
	string przedmiot;
	void wyswietl();
	

	Wykladowca(string i, string n, int w, float p, string pr);
	~Wykladowca();
};

