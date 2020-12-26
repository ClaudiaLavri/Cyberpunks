#include <iostream>
#include <string>
#include "Header1.h"
using namespace std;

int main()
{
	/*Coloana ex;
	cin >> ex;*/

	//Coloane col;
	////testare getteri
	//cout << col.getNumeColoana() << endl;
	//cout << col.getDimensiune() << endl;
	//cout << col.getTip() << endl;
	//cout << col.getValImplicita() << endl;

	////testare setteri
	//char* x = new char[100];
	//strcpy_s(x, 7, "banane");
	//int y = 20;
	//col.setDimensiune(y);
	//col.setNumeColoana(x);
	//col.setTip(x);
	//col.setValImplicita(x);

	//cout << col.getNumeColoana() << endl;
	//cout << col.getDimensiune() << endl;
	//cout << col.getTip() << endl;
	//cout << col.getValImplicita() << endl;

	////testare constr cu parametri
	//char* z = new char[100];
	//strcpy_s(z, 8, "capsuni");
	//Coloane h(z, z, 40, z);
	//cout << h.getNumeColoana() << endl;
	//cout << h.getDimensiune() << endl;
	//cout << h.getTip() << endl;
	//cout << h.getValImplicita() << endl;
	//cout << "\t banane";

	Coloana id;
	Tabela t;
	cin >> t;
	cout << t;
}
