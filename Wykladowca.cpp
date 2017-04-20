#include "Wykladowca.h"

void Wykladowca::wyswietl(){

	cout << "Imie: " << imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
	cout << "Wiek: " << wiek << endl;
	cout << "Pensja: " << pensja << endl;
	cout << "Przedmiot: " << przedmiot << endl;
	cout << endl;

}

Wykladowca::Wykladowca(string i, string n, int w, float p, string pr)
{
	imie = i;
	nazwisko = n;
	wiek = w;
	pensja = p;
	przedmiot = pr;
}


Wykladowca::~Wykladowca()
{
}
