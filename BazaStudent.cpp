#include "BazaStudent.h"
#include <fstream>
void BazaStudent::dodaj(Student s){
	studenci.push_back(s);


}
void BazaStudent::usun(int n){
	
	for (size_t i = 0; i < studenci.size(); i++)
	{
		if (i == n)
		{
			studenci.erase(studenci.begin() + i);
			cout << endl;
			
		}
	}

}
void BazaStudent::usunbaze(){
	studenci.clear();
	cout << "Baza zostala usunieta. Mozesz od nowa dodawac rekordy!" << endl;

}
void BazaStudent::zapisz(){
	if (studenci.empty()){
		cout << "Zapis nie zostal wykonany, nie wprowadziles jeszcze zadnych studentow!" << endl;
		system("pause");
	}
	else{
		fstream plik;
		plik.open("BazaStudent.txt", ios::out);
		for (size_t i = 0; i < studenci.size(); i++)
		{
			plik << "Imie studenta: " << studenci[i].pobierzimie() << endl;
			plik << "Nazwisko studenta: " << studenci[i].pobierznazwisko() << endl;
			plik << "Wiek studenta: " << studenci[i].pobierzwiek() << endl;
			plik << "Indeks studenta: " << studenci[i].pobierzindeks() << endl;
			plik << endl;
		}

		cout << "Baze danych pomyslnie zapisano do pliku!" << endl;
		system("pause");
		plik.close();
	}
}
void BazaStudent::wyswietl(){
	if (studenci.empty()){
		cout << "Nie wprowadziles jeszcze zadnego wykladowcy, baza jest pusta" << endl;
	}
	else{
		for (size_t i = 0; i < studenci.size(); i++)
		{
			cout << "Numer studenta: " << i << endl;
			cout << "Imie studenta: " << studenci[i].pobierzimie() << endl;
			cout << "Nazwisko studenta: " << studenci[i].pobierznazwisko() << endl;
			cout << "Wiek studenta: " << studenci[i].pobierzwiek() << endl;
			cout << "Indeks studenta: " << studenci[i].pobierzindeks() << endl;
			cout << endl;
		}
	}

}
BazaStudent::BazaStudent()
{
}


BazaStudent::~BazaStudent()
{
}
