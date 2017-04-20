#include "BazaDyrektor.h"
#include <fstream>
void BazaDyrektor::dodaj(Dyrektor d){
	dyrektorowie.push_back(d);


}
void BazaDyrektor::usun(int n){

	for (size_t i = 0; i < dyrektorowie.size(); i++)
	{
		if (i == n)
		{
			dyrektorowie.erase(dyrektorowie.begin() + i);
			cout << endl;

		}
	}

}
void BazaDyrektor::usunbaze(){
	dyrektorowie.clear();
	cout << "Baza zostala usunieta. Mozesz od nowa dodawac rekordy!" << endl;

}
void BazaDyrektor::zapisz(){
	if (dyrektorowie.empty()){
		cout << "Zapis nie zostal wykonany, nie wprowadziles jeszcze zadnych dyrektorow!" << endl;
		system("pause");
	}
	else{
		fstream plik;
		plik.open("BazaDyrektor.txt", ios::out);
		for (size_t i = 0; i < dyrektorowie.size(); i++)
		{
			plik << "Imie dyrektora: " << dyrektorowie[i].pobierzimie() << endl;
			plik << "Nazwisko dyrektora: " << dyrektorowie[i].pobierznazwisko() << endl;
			plik << "Wiek dyrektora: " << dyrektorowie[i].pobierzwiek() << endl;
			plik << "Pensja dyrektora: " << dyrektorowie[i].pobierzpensje() << endl;
			plik << "Dzial dyrektora: " << dyrektorowie[i].dzial << endl;
			plik << endl;
		}

		cout << "Baze danych pomyslnie zapisano do pliku!" << endl;
		system("pause");
		plik.close();
	}
}
void BazaDyrektor::wyswietl(){
	if (dyrektorowie.empty()){
		cout << "Nie wprowadziles jeszcze zadnego dyrektora, baza jest pusta" << endl;
		
	}
	else{
		for (size_t i = 0; i < dyrektorowie.size(); i++)
		{
			cout << "Numer dyrektora: " << i << endl;
			cout << "Imie dyrektora: " << dyrektorowie[i].pobierzimie() << endl;
			cout << "Nazwisko dyrektora: " << dyrektorowie[i].pobierznazwisko() << endl;
			cout << "Wiek dyrektora: " << dyrektorowie[i].pobierzwiek() << endl;
			cout << "Pensja dyrektora: " << dyrektorowie[i].pobierzpensje() << endl;
			cout << "Dzial dyrektora: " << dyrektorowie[i].dzial << endl;
			cout << endl;
		}

	}
}
BazaDyrektor::BazaDyrektor()
{
}


BazaDyrektor::~BazaDyrektor()
{
}
