#pragma once
#include "Student.h"
#include <vector>
class BazaStudent
{
private:
	vector<Student> studenci;
public:
	void dodaj(Student s);
	void usun(int n);
	void zapisz();
	void wyswietl();
	void usunbaze();
	BazaStudent();
	~BazaStudent();
};

