#include "BazaWykladowca.h"
#include <fstream>
void BazaWykladowca::dodaj(Wykladowca w){
	wykladowcy.push_back(w);


}
void BazaWykladowca::usun(int n){

	for (size_t i = 0; i < wykladowcy.size(); i++)
	{
		if (i == n)
		{
			wykladowcy.erase(wykladowcy.begin() + i);
			cout << endl;

		}
	}

}
void BazaWykladowca::usunbaze(){
	wykladowcy.clear();
	cout << "Baza zostala usunieta. Mozesz od nowa dodawac rekordy!" << endl;

}
void BazaWykladowca::zapisz(){

	if (wykladowcy.empty()){
		cout << "Zapis nie zostal wykonany, nie wprowadziles jeszcze zadnych wykladowcow!" << endl;
		system("pause");
	}
	else{
		fstream plik;
		plik.open("BazaWykladowca.txt", ios::out);
		for (size_t i = 0; i < wykladowcy.size(); i++)
		{
			plik << "Imie wykladowcy: " << wykladowcy[i].pobierzimie() << endl;
			plik << "Nazwisko wykladowcy: " << wykladowcy[i].pobierznazwisko() << endl;
			plik << "Wiek wykladowcy: " << wykladowcy[i].pobierzwiek() << endl;
			plik << "Pensja wykladowcy: " << wykladowcy[i].pobierzpensje() << endl;
			plik << "Przedmiot wykladowcy: " << wykladowcy[i].przedmiot << endl;
			plik << endl;
		}

		cout << "Baze danych pomyslnie zapisano do pliku!" << endl;
		system("pause");
		plik.close();
	}

}
void BazaWykladowca::wyswietl(){

	if (wykladowcy.empty()){
		cout << "Nie wprowadziles jeszcze zadnego wykladowcy, baza jest pusta" << endl;
		system("pause");
	}
	else{
		for (size_t i = 0; i < wykladowcy.size(); i++)
		{
			cout << "Numer wykladowcy: " << i << endl;
			cout << "Imie wykladowcy: " << wykladowcy[i].pobierzimie() << endl;
			cout << "Nazwisko wykladowcy: " << wykladowcy[i].pobierznazwisko() << endl;
			cout << "Wiek wykladowcy: " << wykladowcy[i].pobierzwiek() << endl;
			cout << "Pensja wykladowcy: " << wykladowcy[i].pobierzpensje() << endl;
			cout << "Przedmiot wykladowcy: " << wykladowcy[i].przedmiot << endl;
			cout << endl;
		}


	}
}

BazaWykladowca::BazaWykladowca()
{

}


BazaWykladowca::~BazaWykladowca()
{
}
