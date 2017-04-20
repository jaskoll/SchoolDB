#include "Student.h"


string Student::pobierzimie(){
	return imie;

}
string Student::pobierznazwisko(){
	return nazwisko;

}
int Student::pobierzwiek(){
	return wiek;

}
int Student::pobierzindeks(){
	return indeks;

}
void Student::wyswietl(){

	cout << "Imie: "<< imie << endl;
	cout << "Nazwisko: "<< nazwisko << endl;
	cout << "Wiek: "<< wiek << endl;
	cout << "Indeks: "<< indeks << endl;
	cout << endl;

}
Student::Student(string i, string n, int w, int in)
{
	imie = i;
	nazwisko = n;
	wiek = w;
	indeks = in;
}


Student::~Student()
{
}
