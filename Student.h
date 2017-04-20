#pragma once
#include "Pracownik.h"
class Student
{
private:
	string imie;
	string nazwisko;
	int wiek;
	int indeks;
public:
	string pobierzimie();
	string pobierznazwisko();
	int pobierzwiek();
	int pobierzindeks();
	void wyswietl();

	Student(string i, string n, int w, int in);
	~Student();
};

