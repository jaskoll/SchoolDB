#include "Dyrektor.h"

void Dyrektor::wyswietl(){

	cout << "Imie: " << imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
	cout << "Wiek: " << wiek << endl;
	cout << "Pensja: " << pensja << endl;
	cout << "Dzial: " << dzial << endl;
	cout << endl;

}
Dyrektor::Dyrektor(string i, string n, int w, float p, string dz)
{
	imie = i;
	nazwisko = n;
	wiek = w;
	pensja = p;
	dzial = dz;
}


Dyrektor::~Dyrektor()
{
}
