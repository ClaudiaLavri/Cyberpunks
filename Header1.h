#pragma once
#include <iostream>
#include <string>
using namespace std;


class Coloana
{
private:
	char* nume_coloana;
	char* tip_coloana;
	int dimensiune;
	char* val_implicita;
public:
	Coloana()
	{
		this->nume_coloana = new char[strlen("Coloana") + 1];
		strcpy_s(this->nume_coloana, strlen("Coloana") + 1, "Coloana");
		this->tip_coloana = new char[strlen("Necunoscut") + 1];
		strcpy_s(this->tip_coloana, strlen("Necunoscut") + 1, "Necunoscut");
		this->dimensiune = 0;
		this->val_implicita = new char[strlen("Necunoscuta") + 1];
		strcpy_s(this->val_implicita, strlen("Necunoscuta") + 1, "Necunoscuta");
	}
	
	Coloana(char* nume_coloana, char* tip_coloana, int dimensiune, char* val_implicita)
	{
		if (nume_coloana != nullptr)
		{
			this->nume_coloana = new char[strlen(nume_coloana) + 1];
			strcpy_s(this->nume_coloana, strlen(nume_coloana) + 1, nume_coloana);
		}
		else
		{
			this->nume_coloana = new char[strlen("N/A") + 1];
			strcpy_s(this->nume_coloana, strlen("N/A") + 1, "N/A");
		}

		if (tip_coloana != nullptr)
		{
			this->tip_coloana = new char[strlen(tip_coloana) + 1];
			strcpy_s(this->tip_coloana, strlen(tip_coloana) + 1, tip_coloana);
		}
		else
		{
			this->tip_coloana = new char[strlen("N/A") + 1];
			strcpy_s(this->tip_coloana, strlen("N/A") + 1, "N/A");
		}

		if(dimensiune>0)
		{
			this->dimensiune = dimensiune;
		}
		else
		{
			this->dimensiune = 0;
		}

		if (val_implicita != nullptr)
		{
			this->val_implicita = new char[strlen(val_implicita) + 1];
			strcpy_s(this->val_implicita, strlen(val_implicita) + 1, val_implicita);
		}
		else
		{
			this->val_implicita = new char[strlen("N/A") + 1];
			strcpy_s(this->val_implicita, strlen("N/A") + 1, "N/A");
		}
	}

	Coloana(const Coloana& c)
	{
		if (c.nume_coloana != nullptr)
		{
			this->nume_coloana = new char[strlen(c.nume_coloana) + 1];
			strcpy_s(this->nume_coloana, strlen(c.nume_coloana) + 1, c.nume_coloana);
		}
		else
		{
			this->nume_coloana = new char[strlen("N/A") + 1];
			strcpy_s(this->nume_coloana, strlen("N/A") + 1, "N/A");
		}

		if (c.tip_coloana != nullptr)
		{
			this->tip_coloana = new char[strlen(c.tip_coloana) + 1];
			strcpy_s(this->tip_coloana, strlen(c.tip_coloana) + 1, c.tip_coloana);
		}
		else
		{
			this->tip_coloana = new char[strlen("N/A") + 1];
			strcpy_s(this->tip_coloana, strlen("N/A") + 1, "N/A");
		}

		if (dimensiune > 0)
		{
			this->dimensiune = c.dimensiune;
		}
		else
		{
			this->dimensiune = 0;
		}

		if (c.val_implicita != nullptr)
		{
			this->val_implicita = new char[strlen(c.val_implicita) + 1];
			strcpy_s(this->val_implicita, strlen(c.val_implicita) + 1, c.val_implicita);
		}
		else
		{
			this->val_implicita = new char[strlen("N/A") + 1];
			strcpy_s(this->val_implicita, strlen("N/A") + 1, "N/A");
		}
	}

	Coloana& operator=(Coloana& c)
	{
		if (this->nume_coloana != nullptr)
		{
			delete[] this->nume_coloana;
		}
		if (this->tip_coloana != nullptr)
		{
			delete[] this->tip_coloana;
		}
		if (this->val_implicita != nullptr)
		{
			delete[] this->val_implicita;
		}
		if (c.nume_coloana != nullptr)
		{
			this->nume_coloana = new char[strlen(c.nume_coloana) + 1];
			strcpy_s(this->nume_coloana, strlen(c.nume_coloana) + 1, c.nume_coloana);
		}
		if (c.tip_coloana != nullptr)
		{
			this->tip_coloana = new char[strlen(c.tip_coloana) + 1];
			strcpy_s(this->tip_coloana, strlen(c.tip_coloana) + 1, c.tip_coloana);
		}
		this->dimensiune = c.dimensiune;
		if (c.val_implicita != nullptr)
		{
			this->val_implicita = new char[strlen(c.val_implicita) + 1];
			strcpy_s(this->val_implicita, strlen(c.val_implicita) + 1, c.val_implicita);
		}
	}
	
	~Coloana()
	{
		if (this->nume_coloana != nullptr)
		{
			delete[] this->nume_coloana;
		}
		if (this->tip_coloana != nullptr)
		{
			delete[] this->tip_coloana;
		}
		if (this->val_implicita != nullptr)
		{
			delete[] this->val_implicita;
		}
	}

	void setNumeColoana(char* nume_coloana)
	{
		if (nume_coloana != nullptr)
		{
			strcpy_s(this->nume_coloana, strlen(nume_coloana) + 1, nume_coloana);
		}
	}

	void setTip(char* tip_coloana)
	{
		if (tip_coloana != nullptr)
		{
			strcpy_s(this->tip_coloana, strlen(tip_coloana) + 1, tip_coloana);
		}
	}

	void setDimensiune(int dimensiune)
	{
		if (dimensiune > 0)
		{
			this->dimensiune = dimensiune;
		}
	}

	void setValImplicita(char* val_implicita)
	{
		if (val_implicita != 0)
		{
			strcpy_s(this->val_implicita, strlen(val_implicita) + 1, val_implicita);
		}
	}

	char* getNumeColoana()
	{
		return this->nume_coloana;
	}

	char* getTipColoana()
	{
		return this->tip_coloana;
	}

	int getDimensiune()
	{
		return this->dimensiune;
	}

	char* getValImplicita()
	{
		return this->val_implicita;
	}
	
	//Supraincarcare operatori Coloane

	bool operator!()
	{
		return val_implicita != nullptr;
	}

	Coloane operator++()
	{
		dimensiune++;
		return *this;
	}

	Coloane operator++(int i)
	{
		Coloane copie = *this;
		dimensiune++;
		return copie;
	}

	Coloane operator--()
	{
		dimensiune--;
		return *this;
	}

	Coloane operator--(int i)
	{
		Coloane copie = *this;
		dimensiune--;
		return copie;
	}

	Coloane operator+(Coloane t)
	{
		Coloane copie = *this;
		copie.dimensiune = dimensiune + t.dimensiune;
		return copie;
	}

	Coloane operator-(Coloane t)
	{
		Coloane copie = *this;
		if (dimensiune >= t.dimensiune)
		{
			copie.dimensiune = dimensiune - t.dimensiune;
			return copie;
		}
		else
		{
			cout << "Dimensiunea va fi negativa"<<endl;
		}
	}

	int operator[](int index)
	{
		if (index >= 0 && index < strlen(tip))
		{
			return tip[index];
		}
		else
		{
			return -1;
		}
	}

	explicit operator int()
	{
		return dimensiune;
	}

	operator int()
	{
		return dimensiune;
	}

	bool operator >(Coloane t)
	{
		return this->dimensiune < t.dimensiune;
	}

	bool operator==(Coloane& t)
	{
		return  this->tip=t.tip ;
	}

};

	friend class Tabele;
	friend ostream& operator<<(ostream& out, Coloana);
	friend istream& operator>>(istream& in, Coloana&);
};

ostream& operator<<(ostream& out, Coloana c)
{
	out << "Nume Coloana\tTip\tDimensiune\tValoare Implicita";
	out << c.nume_coloana << "\t" << c.tip_coloana << "\t" << c.dimensiune << "\t" << c.val_implicita;

	return out;
}


istream& operator>>(istream& in, Coloana& c)
{
	//in >> ws;
	cout << "Nume Coloana: ";
	string buffer1;
	getline(in, buffer1);
	c.nume_coloana = new char[buffer1.length() + 1];
	strcpy_s(c.nume_coloana, buffer1.length() + 1, buffer1.c_str());
	//in >> ws;
	cout << "Tip de date: ";
	string buffer2;
	getline(in, buffer2);
	c.tip_coloana = new char[buffer2.length() + 1];
	strcpy_s(c.tip_coloana, buffer2.length() + 1, buffer2.c_str());
	//in >> ws;
	cout << "Dimensiune: ";
	in >> c.dimensiune;
	cout << "Valoare implicita: ";
	in >> ws;
	string buffer3;
	getline(in, buffer3);
	c.val_implicita = new char[buffer3.length() + 1];
	strcpy_s(c.val_implicita, buffer3.length() + 1, buffer3.c_str());

	return in;
}

class Tabela
{

private:
	char* nume_tabela;
	//char** nume_coloane;
	int nr_coloane;
	Coloana* col;
public:
	Tabela()											//constructor implicit
	{
		nume_tabela = new char[strlen("Tabel") + 1];
		strcpy_s(nume_tabela, strlen("Tabel") + 1, "Tabel");
		nr_coloane = 0;
		col = nullptr;
	}

	Tabela(char* nume_tabela, int nr_coloane, Coloana* coloana)					//consrtuctor cu parametrii
	{
		if (nume_tabela != nullptr)
		{
			this->nume_tabela = new char[strlen(nume_tabela)];
			strcpy_s(this->nume_tabela, strlen(nume_tabela) + 1, nume_tabela);
		}
		this->nr_coloane = nr_coloane;
		if (nr_coloane > 0)
		{
			this->col = new Coloana[nr_coloane];
			for (int i = 0; i < nr_coloane; i++)
			{
				this->col[i] = coloana[i];
			}
		}
	}

	~Tabela()					 						//destructor
	{
		if (nume_tabela != nullptr)
		{
			delete[] nume_tabela;
		}

		if (col != nullptr)
		{
			delete[] col;
		}
	}

	Tabela(const Tabela& t)										//constructor de copiere
	{
		if (nume_tabela != nullptr)
		{
			this->nume_tabela = new char[strlen(t.nume_tabela) + 1];
			strcpy_s(this->nume_tabela, strlen(t.nume_tabela) + 1, t.nume_tabela);
		}
		else
		{
			this->nume_tabela = nullptr;
		}

		if (nr_coloane > 0)
		{
			this->nr_coloane = t.nr_coloane;
			this->col = new Coloana[nr_coloane];
			for (int i = 0; i < t.nr_coloane; i++)
			{
				this->col[i] = t.col[i];
			}
		}
	}

	Tabela& operator=(const Tabela& t)				  				//supraincarcare operator =
	{
		if (nume_tabela != nullptr)
		{
			delete[] nume_tabela;
		}

		if (col != nullptr)
		{
			delete[] col;
		}
		if (nume_tabela != nullptr)
		{
			this->nume_tabela = new char[strlen(t.nume_tabela) + 1];
			strcpy_s(this->nume_tabela, strlen(t.nume_tabela) + 1, t.nume_tabela);
		}
		else
		{
			this->nume_tabela = nullptr;
		}

		if (nr_coloane > 0)
		{
			this->nr_coloane = t.nr_coloane;
			this->col = new Coloana[nr_coloane];
			for (int i = 0; i < t.nr_coloane; i++)
			{
				this->col[i] = t.col[i];
			}
		}
	}

	void SetNume_tabela(char* nume_tabela)									//setter nume tabela
	{
		if (nume_tabela != nullptr)
		{
			this->nume_tabela = new char[strlen(nume_tabela) + 1];
			strcpy_s(this->nume_tabela, strlen(nume_tabela) + 1, nume_tabela);
		}
		else
		{
			this->nume_tabela = nullptr;
		}
	}

	char* GetNume_tabela()						 					//getter nume tabela
	{
		if (nume_tabela != nullptr)
		{
			return nume_tabela;
		}
		else
		{
			return nullptr;
		}
	}

	void SetNr_coloane(int nr_coloane)					 				//setter numar coloane
	{
		if (nr_coloane > 0)
		{
			this->nr_coloane = nr_coloane;
		}
	}

	int GetNr_coloane()							  				//getter numar coloane
	{
		if (this->nr_coloane > 0)
		{
			return this->nr_coloane;
		}
		else
		{
			return 0;
		}
	}

	void SetColoana(Coloana* col, int nr_coloane)								//setter coloane
	{
		if (nr_coloane > 0 && col != nullptr)
		{
			this->col = new Coloana[nr_coloane];
			for (int i = 0; i < nr_coloane; i++)
			{
				this->col[i] = col[i];
			}
		}
		else
		{
			col = nullptr;
		}
	}

	Coloana* GetColoana()											//getter coloane
	{
		if (this->col != nullptr)
		{
			return col;
		}
		else
		{
			return 0;
		}
	}
	
	//Supraincarcare operatori

	bool operator!()
	{
		return nume_tabela != 0;
	}

	Tabela operator++()
	{
		nr_coloane++;
		return *this;
	}

	Tabela operator++(int i)
	{
		Tabela copie = *this;
		nr_coloane++;
		return copie;
	}

	Tabela operator--()
	{
		nr_coloane--;
		return *this;
	}

	Tabela operator--(int i)
	{
		Tabela copie = *this;
		nr_coloane--;
		return copie;
	}

	Tabela operator+(Tabela t)
	{
		Tabela copie = *this;
		copie.nr_coloane = nr_coloane + t.nr_coloane;
		return copie;
	}

	Tabela operator-(Tabela t)
	{
		Tabela copie = *this;
		if (nr_coloane >= t.nr_coloane)
		{
			copie.nr_coloane = nr_coloane - t.nr_coloane;
			return copie;
		}
		else
		{
			cout << "Numarul de coloane va fi negativ"<<endl;
		}
	}

	int operator[](int index)
	{
		if (index >= 0 && index < strlen(nume_tabela))
		{
			return nume_tabela[index];
		}
		else
		{
			return -1;
		}
	}

	explicit operator int()
	{
		return nr_coloane;
	}

	operator int()
	{
		return nr_coloane;
	}

	bool operator >(Tabela t)
	{
		return this->nr_coloane < t.nr_coloane;
	}

	bool operator==(Tabela& t)
	{
		return  this->nr_coloane=t.nr_coloane ;
	}
};




class Inregistrare
{
private:
	static int id;
	int nr_verificare=0;
	char* valoare;
public:
	Inregistrare()
	{
		this->valoare = new char[strlen("N/A") + 1];
		strcpy_s(this->valoare, strlen("N/A") + 1, "N/A");

		this->nr_verificare++;
	}

	Inregistrare()
	{

	}
};

class Database
{
private:
	Tabela* tabela;
	int nr_tabele;
public:
	void New_table(string x)									//creeaza o noua tabela
	{
		if (nr_tabele == 0)
		{
			nr_tabele++;
			tabela = new Tabela[nr_tabele];
			tabela->SetNume_tabela(x.c_str);
		}
		else
		{
			for (int i = 0; i < nr_tabele; i++)
			{
				if (x == tabela[i].GetNume_tabela())
				{
					cout << "Tabela exista deja";
					break;
				}
			}
			Tabela* copie = new Tabela[nr_tabele + 1];
			for (int i = 0; i < this->nr_tabele; i++)
			{
				copie[i] = tabela[i];
			}
			delete[] tabela;
			nr_tabele++;
			tabela = new Tabela[nr_tabele];
			for (int i = 0; i < this->nr_tabele - 1; i++)
			{
				tabela[i] = copie[i];
			}
			delete[] copie;
		}
	}

	void Drop_table(string x)								//sterge tabela cu numele x
	{
		if (nr_tabele > 0)
		{
			Tabela auxi;
			for (int i = 0; i < nr_tabele; i++)
			{
				if (x == tabela[i].GetNume_tabela())
				{
					auxi = tabela[i];
				}
			}
			for (int i = 0; i < nr_tabele; i++)
			{
				Tabela* copie = new Tabela[nr_tabele];
				if (tabela[i] == auxi)
				{
					copie[i] = tabela[i];
				}
			}
			delete[] tabela;
			nr_tabele--;
			tabela = new Tabela[nr_tabele];
			for (int i = 0; i < nr_tabele; i++)
			{
				tabela[i] = copie[i];
			}
			delete[] copie;
		}
		else
		{
			cout << "Nu exista nicio tabela";
		}
	}

	void Display_table(string x)							//afiseaza tabela cu numele x
	{
		//de facut
	}

};

class RecunoastereText
{
private:
	string text_utilizator;
	const string create = "CREATE TABLE";
	const string display = "DISPLAY TABLE";
	const string drop = "DROP TABLE";
	const string insert = "INSERT INTO";
	const string delete_from = "DELETE FROM";
	const string select = "SELECT";
	const string update = "UPDATE";
public:
	RecunoastereText()
	{
		cout << "CREATE TABLE table_name ((nume_coloana_1, tip, dimensiune, valoare_implicita), (nume_coloana_2, tip, dimensiune, valoare_implicita), ...) " << endl;
		cout << "DROP TABLE table_name" << endl;
		cout << "DISPLAY TABLE table_name" << endl;
		cout << "INSERT INTO table_name VALUES(...)" << endl;
		cout << "DELETE FROM nume_tabela WHERE nume_coloana = valoare" << endl;
		cout << "SELECT (cel_putin_o_coloana, ...) | ALL FROM nume_tabela [WHERE nume_coloana = valoare] - clauza WHERE este optionala" << endl;
		cout << "UPDATE nume_tabela SET nume_coloana = valoare WHERE nume_coloana = valoare" << endl;
		cin >> text_utilizator;
	}

	RecunoastereText(string text_utilizator)
	{
		cout << "CREATE TABLE table_name ((nume_coloana_1, tip, dimensiune, valoare_implicita), (nume_coloana_2, tip, dimensiune, valoare_implicita), ...) " << endl;
		cout << "DROP TABLE table_name" << endl;
		cout << "DISPLAY TABLE table_name" << endl;
		cout << "INSERT INTO table_name VALUES(...)" << endl;
		cout << "DELETE FROM nume_tabela WHERE nume_coloana = valoare" << endl;
		cout << "SELECT (cel_putin_o_coloana, ...) | ALL FROM nume_tabela [WHERE nume_coloana = valoare] - clauza WHERE este optionala" << endl;
		cout << "UPDATE nume_tabela SET nume_coloana = valoare WHERE nume_coloana = valoare" << endl;
		this->text_utilizator = text_utilizator;
	}

	void compara(string text_utilizator)
	{
		int gasit = -1;
		string text_comenzi[7] = { create, display, drop, insert, delete_from, select, update };
		for (int i = 0; i < 7; i++)
		{
			gasit = text_utilizator.find(text_comenzi[i]);
			if (gasit != string::npos)
			{
				if (i == 0)
				{

				}
				if (i == 1)
				{

				}
				if (i == 2)
				{

				}
				if (i == 3)
				{

				}
				if (i == 4)
				{

				}
				if (i == 5)
				{

				}
				if (i == 6)
				{

				}
				if (i == 7)
				{

				}
			}
		}
	}
};
