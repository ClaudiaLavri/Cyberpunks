#include <iostream>
#include <string>
#include "Header1.h"
using namespace std;

int main()
{
	//EDI
	//Testare clasa Coloana

	Coloana c;

	//testare setter si getter nume_coloana
	char* a = new char[100];
	strcpy_s(a, strlen("Nume") + 1, "Nume");
	c.setNumeColoana(a);
	cout << "Numele coloanei este: " << c.getNumeColoana() << endl;

	//testare setter si getter tip_coloana
	char* b = new char[100];
	strcpy_s(b, strlen("text") + 1, "text");
	c.setTip(b);
	cout << "Tipul coloanei este: " << c.getTipColoana() << endl;

	//testare setter si getter dimensiune
	c.setDimensiune(20);
	cout << "Dimensiunea coloanei este: " << c.getDimensiune() << endl;

	//testare setter si getter val_implicita
	char* e = new char[100];
	strcpy_s(e, strlen("N/A") + 1, "N/A");
	c.setValImplicita(e);
	cout << "Valoarea implicita a coloanei este: " << c.getValImplicita() << endl;

	//Testarea clasa Tabela

	Tabela t;

	//testare setter si getter nume_tabela
	char* x = new char[100];
	strcpy_s(x, strlen("Student") + 1, "Student");
	t.SetNume_tabela(x);
	cout << "Numele tabelei este: "<<t.GetNume_tabela() << endl;

	//testare setter si getter nr_coloane
	t.SetNr_coloane(1);
	cout << "Numarul de coloane este: " << t.GetNr_coloane() << endl;

	//testare coloane
	Coloana* col = new Coloana[2];
	col[0] =  c ;
	t.SetColoana(col, 1);
	cout << "Coloana este: " << *t.GetColoana() << endl;
	cout << t.GetColoana();

	//testare database
	Database d;
	d.New_table("Clienti");
	d.Display_table("Clienti");

	Tabela tb;
	cin >> tb;
	cout << t;
	
	
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
	
	//testare Display_table si Drop_table
	Coloana* col1 = new Coloana[2];									//creare coloane
	Coloana c1((char*)"Nume", (char*)"text", 20, (char*)"N/a");
	Coloana c2((char*)"Prenume", (char*)"text", 20, (char*)"N/a");
	col1[0] = c1;
	col1[1] = c2;
	Tabela* tab = new Tabela[1];									//creare tabela
	tab->SetNume_tabela((char*)"Clienti");
	tab->SetNr_coloane(2);
	tab->SetColoana(col1, 2);
	Database d(tab);												//creare database
	d.Display_table(tab->GetNume_tabela());
	d.Drop_table(tab->GetNume_tabela());
	d.Drop_table("Produse");
	
	
	
	//PROGRAM MAIN
	Database d;
	RecunoastereText r;
	r.compara();
	
	
	
}
