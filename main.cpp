#include"Pracownik.h"
#include"Wykladowca.h"
#include"Dyrektor.h"
#include"Student.h"
#include"BazaWykladowca.h"
#include"BazaDyrektor.h"
#include"BazaStudent.h"


int main(){
	BazaStudent bazastudent;
	BazaDyrektor bazadyrektor;
	BazaWykladowca bazawykladowca;
	int wybor, wiek, indeks, n;
	string imie, nazwisko, przedmiot, dzial;
	float pensja;
	do{
		cout << "1. Dodaj studenta" << endl;
		cout << "2. Zapisz Baze Danych studentow do pliku" << endl;
		cout << "3. Usun studenta" << endl;
		cout << "4. Dodaj wykladowce" << endl;
		cout << "5. Zapisz Baze Danych wykladowcow do pliku" << endl;
		cout << "6. Usun wykladowce" << endl;
		cout << "7. Dodaj dyrektora" << endl;
		cout << "8. Zapisz Baze Danych dyrektorow do pliku" << endl;
		cout << "9. Usun dyrektora" << endl;
		cout << "10. Wyswietl baze studentow" << endl;
		cout << "11. Wyswietl baze wykladowcow" << endl;
		cout << "12. Wyswietl baze dyrektorow" << endl;
		cout << "13. Usun baze studentow" << endl;
		cout << "14. Usun baze wykladowcow" << endl;
		cout << "15. Usun baze dyrektorow" << endl;
		cout << "16. Wyjdz z programu" << endl;
		cout << endl;
		cin >> wybor;
		cout << endl;
		switch (wybor)
		{
		case 1: {
			cout << "Podaj imie studenta" << endl;
			cin >> imie;
			cout << "Podaj nazwisko studenta" << endl;
			cin >> nazwisko;
			cout << "Podaj wiek studenta" << endl;
			cin >> wiek;
			cout << "Podaj numer indeksu studenta" << endl;
			cin >> indeks;
			cout << endl;
			Student s(imie, nazwisko, wiek, indeks);
			bazastudent.dodaj(s);
			cout << "Student zostal dodany do bazy!" << endl;
			cout << endl;
			s.wyswietl();
			system("pause");
		}

			break;
		case 2:{
			bazastudent.zapisz();
			
		}
			break;
		case 3:{
			cout << "Podaj numer studenta, ktorego usunac" << endl;
			cin >> n;
			bazastudent.usun(n);
			cout << "Student o podanym numerze zostal usuniety" << endl;
			system("pause");
		}
			break;
		case 4:{
			cout << "Podaj imie wykladowcy" << endl;
			cin >> imie;
			cout << "Podaj nazwisko wykladowcy" << endl;
			cin >> nazwisko;
			cout << "Podaj wiek wykladowcy" << endl;
			cin >> wiek;
			cout << "Podaj pensje wykladowcy" << endl;
			cin >> pensja;
			cout << "Podaj przedmiot, ktorego uczy wykladowca" << endl;
			cin >> przedmiot;
			cout << endl;
			Wykladowca w(imie, nazwisko, wiek, pensja, przedmiot);
			bazawykladowca.dodaj(w);
			cout << "Wykladowca zostal dodany do bazy!" << endl;
			cout << endl;
			w.wyswietl();
			system("pause");
		}
			break;
		case 5:{
			bazawykladowca.zapisz();
		}
			break;
		case 6:{
			cout << "Podaj numer wykladowcy, ktorego usunac" << endl;
			cin >> n;
			bazawykladowca.usun(n);
			cout << "Wykladowca o podanym numerze zostal usuniety!" << endl;
			system("pause");
		}
			break;
		case 7:{
			cout << "Podaj imie dyrektora" << endl;
			cin >> imie;
			cout << "Podaj nazwisko dyrektora" << endl;
			cin >> nazwisko;
			cout << "Podaj wiek dyrektora" << endl;
			cin >> wiek;
			cout << "Podaj pensje dyrektora" << endl;
			cin >> pensja;
			cout << "Podaj dzial dyrektora" << endl;
			cin >> dzial;
			cout << endl;
			Dyrektor d(imie, nazwisko, wiek, pensja, dzial);
			bazadyrektor.dodaj(d);
			cout << "Dyrektor zostal dodany do bazy!" << endl;
			cout << endl;
			d.wyswietl();
			system("pause");
		}
			break;
		case 8:{
			bazadyrektor.zapisz();
		}
			break;
		case 9:{
			cout << "Podaj numer dyrektora, ktorego usunac" << endl;
			cin >> n;
			bazadyrektor.usun(n);
			cout << "Dyrektor o podanym numerze zostal usuniety" << endl;
			system("pause");
		}
			break;
		case 10:

			bazastudent.wyswietl();
			system("pause");
			break;
		case 11:

			bazawykladowca.wyswietl();
			system("pause");
			break;
		case 12:

			bazadyrektor.wyswietl();
			system("pause");
			break;
		case 13:

			bazastudent.usunbaze();
			system("pause");
			break;
		case 14:

			bazawykladowca.usunbaze();
			system("pause");
			break;
		case 15:

			bazadyrektor.usunbaze();
			system("pause");
			break;
		case 16:
			exit(16);
			break;
		}
		system("cls");
	} while (wybor != 16);
	system("PAUSE");
	
	return 0;
}
