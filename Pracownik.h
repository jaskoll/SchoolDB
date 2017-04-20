#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pracownik
{
public:
	string imie;
	string nazwisko;
	int wiek;
	float pensja;


	string pobierzimie();
	string pobierznazwisko();
	int pobierzwiek();
	float pobierzpensje();

	Pracownik();
	~Pracownik();
};

