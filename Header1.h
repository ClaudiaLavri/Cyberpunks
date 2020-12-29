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
	//constructor implicit
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
	
	//constructor cu parametrii
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

	//constructor de copiere
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

	//supraincarcare operator =
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
		else
		{
			this->nume_coloana = new char[strlen("Coloana") + 1];
			strcpy_s(this->nume_coloana, strlen("Coloana") + 1, "Coloana");
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
		this->dimensiune = c.dimensiune;
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
		return *this;
	}
	
	//destructor
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

	//setter nume_coloana
	void setNumeColoana(char* nume_coloana)
	{
		if (nume_coloana != nullptr)
		{
			strcpy_s(this->nume_coloana, strlen(nume_coloana) + 1, nume_coloana);
		}
	}

	//setter tip_coloana
	void setTip(char* tip_coloana)
	{
		if (tip_coloana != nullptr)
		{
			strcpy_s(this->tip_coloana, strlen(tip_coloana) + 1, tip_coloana);
		}
	}

	//setter dimensiune
	void setDimensiune(int dimensiune)
	{
		if (dimensiune > 0)
		{
			this->dimensiune = dimensiune;
		}
	}

	//setter val_implicita
	void setValImplicita(char* val_implicita)
	{
		if (val_implicita != 0)
		{
			strcpy_s(this->val_implicita, strlen(val_implicita) + 1, val_implicita);
		}
	}

	//getter nume_coloana
	char* getNumeColoana()
	{
		return this->nume_coloana;
	}

	//getter tip_coloana
	char* getTipColoana()
	{
		return this->tip_coloana;
	}

	//getter dimensiune
	int getDimensiune()
	{
		return this->dimensiune;
	}

	//getter val_implicita
	char* getValImplicita()
	{
		return this->val_implicita;
	}
	
	//Supraincarcare operatori Coloane
	
	//supraincarcare operator !
	bool operator!()
	{
		return val_implicita != nullptr;
	}

	//supraincarcare operator ++
	Coloana operator++()
	{
		dimensiune++;
		return *this;
	}

	//supraincarcare operator ++(int i)
	Coloana operator++(int i)
	{
		Coloana copie = *this;
		dimensiune++;
		return copie;
	}

	//supraincarcare operator --
	Coloana operator--()
	{
		dimensiune--;
		return *this;
	}

	//supraincarcare operator --(int i)
	Coloana operator--(int i)
	{
		Coloane copie = *this;
		dimensiune--;
		return copie;
	}

	//supraincarcare operator +
	Coloana operator+(Coloane t)
	{
		Coloane copie = *this;
		copie.dimensiune = dimensiune + t.dimensiune;
		return copie;
	}

	//supraincarcare operator -
	Coloana operator-(Coloane t)
	{
		Coloana copie = *this;
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

	//supraincarcare operator []
	int operator[](int index)
	{
		if (index >= 0 && index < strlen(tip_coloana))
		{
			return tip_coloana[index];
		}
		else
		{
			return -1;
		}
	}

	//supraincarcare operator ()
	operator int()
	{
		return dimensiune;
	}

	//supraincarcare operator >
	bool operator >(Coloana t)
	{
		return this->dimensiune > t.dimensiune;
	}

	//supraincarcare operator ==
	bool operator==(Coloana& t)
	{
		return  this->tip=t.tip ;
	}

	friend class Tabela;
	friend ostream& operator<<(ostream& out, Coloana);
	friend istream& operator>>(istream& in, Coloana&);
};

//operator de afisare clasa Coloana
ostream& operator<<(ostream& out, Coloana c)
{
	out << "Nume Coloana\tTip\tDimensiune\tValoare Implicita";
	out << c.nume_coloana << "\t" << c.tip_coloana << "\t" << c.dimensiune << "\t" << c.val_implicita;

	return out;
}

//operator de citire clasa Coloana
istream& operator>>(istream& in, Coloana& c)
{
	//in >> ws;
	cout << "Nume Coloana: ";
	in>>ws;
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
	int nr_coloane;
	Coloana* col;
public:
	//constructor implicit
	Tabela()
	{
		nume_tabela = new char[strlen("Tabel") + 1];
		strcpy_s(nume_tabela, strlen("Tabel") + 1, "Tabel");
		nr_coloane = 0;
		col = nullptr;
	}

	//constructor cu parametrii
	Tabela(char* nume_tabela, int nr_coloane, Coloana* coloana)
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
		else
		{
			col = nullptr;
		}
	}

	//destructor
	~Tabela()
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

	//constructor de copiere
	Tabela(const Tabela& t)
	{
		if (t.nume_tabela != nullptr)
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
		else
		{
			col = nullptr;
			nr_coloane = 0;
		}
	}

	//supraincarcare operator =
	Tabela& operator=(const Tabela& t)
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
		return *this;
	}

	//setter nume_tabela
	void SetNume_tabela(char* nume_tabela)
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

	//getter nume_tabela
	char* GetNume_tabela()
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

	//setter nr_coloane
	void SetNr_coloane(int nr_coloane)
	{
		if (nr_coloane > 0)
		{
			this->nr_coloane = nr_coloane;
		}
	}

	//getter nr_coloane
	int GetNr_coloane()
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

	//setter coloane
	void SetColoana(Coloana* col, int nr_coloane)
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

	//getter coloane
	Coloana* GetColoana()
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

	//supraincarcare operator !
	bool operator!()
	{
		return nume_tabela != 0;
	}

	//supraincarcare operator ++
	Tabela operator++()
	{
		nr_coloane++;
		return *this;
	}

	//supraincarcare operator ++(int i)
	Tabela operator++(int i)
	{
		Tabela copie = *this;
		this->nr_coloane++;
		return copie;
	}

	//supraincarcare operator --
	Tabela operator--()
	{
		nr_coloane--;
		return *this;
	}

	//supraincarcare operator --(int i)
	Tabela operator--(int i)
	{
		Tabela copie = *this;
		nr_coloane--;
		return copie;
	}

	//supraincarcare operator +
	Tabela operator+(Tabela t)
	{
		Tabela copie = *this;
		copie.nr_coloane = nr_coloane + t.nr_coloane;
		return copie;
	}

	//supraincarcare operator -
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

	//supraincarcare operator []
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

	//supraincarcare operator ()
	operator int()
	{
		return nr_coloane;
	}

	//supraincarcare operator >
	bool operator >(Tabela t)
	{
		return this->nr_coloane > t.nr_coloane;
	}

	//supraincarcare operator ==
	bool operator==(Tabela& t)
	{
		return  this->nr_coloane=t.nr_coloane ;
	}
	
	//functie pentru generarea unei noi coloane
	void New_coloana(string x, string tip, int dimensiune, string val_implicita)
	{
		if (nr_coloane == 0)
		{
			nr_coloane++;
			col = new Coloana[nr_coloane];
			col->setNumeColoana((char*)x.c_str());
			col->setDimensiune(dimensiune);
			col->setTip((char*)tip.c_str());
			col->setValImplicita((char*)val_implicita.c_str());

		}
		else
		{
			Coloana* copie = new Coloana[nr_coloane + 1];
			for (int i = 0; i < this->nr_coloane; i++)
			{
				copie[i] = col[i];
			}
			delete[] col;
			nr_coloane++;
			col = new Coloana[nr_coloane + 1];
			for (int i = 0; i < this->nr_coloane - 1; i++)
			{
				col[i] = copie[i];
			}
			delete[] copie;
			col->setNumeColoana((char*)x.c_str());
			col->setDimensiune(dimensiune);
			col->setTip((char*)tip.c_str());
			col->setValImplicita((char*)val_implicita.c_str());
		}
	}
	
	friend class Coloana;
	friend ostream& operator<<(ostream& out, Tabela);
	friend istream& operator>>(istream& in, Tabela&);
};

//supraincarcare operator << pentru clasa Tabela
ostream& operator<<(ostream& out, Tabela d)
{
	out << d.nume_tabela << endl;
	for (int i = 0; i < d.nr_coloane; i++)
	{
		out << d.col[i].getNumeColoana()<< "\t";
	}
	
	return out;
}

//supraincarcare operator >> pentru clasa Tabela
istream& operator>>(istream& in, Tabela& t)
{
	cout << "Nume tabela: ";
	//in >> ws;
	char buffer[100];
	in.getline(buffer, 99);
	int l = strlen(buffer);
	if (t.nume_tabela != nullptr)
	{
		delete[] t.nume_tabela;
	}
	if (l > 0)
	{
		t.nume_tabela = new char[l + 1];
		strcpy_s(t.nume_tabela, l + 1, buffer);
		//in >> ws;
	}
	else
	{
		t.nume_tabela = nullptr;
	}
	cout << "Numar coloane: ";
	in >> t.nr_coloane;
	for (int i = 0; i < t.nr_coloane; i++)
	{
		in >> t.col[i];
	}
	
	return in;
}

class Inregistrare
{
private:
	static int id;
	//int nr_verificare = 0;
	string* valoare;
	int capacitate;
public:
	//constructor implicit
	Inregistrare()
	{
		this->valoare = nullptr;
		this->capacitate = 0;
	}

	//constructor cu parametrii
	Inregistrare(string* valoare, int capacitate)
	{
		if (capacitate > 0)
		{
			this->capacitate = capacitate;
			this->valoare = new string[capacitate];
			for (int i = 0; i < capacitate; i++)
			{
				this->valoare[i] = valoare[i];
			}
		}
		else
		{
			this->valoare = nullptr;
			this->capacitate = 0;
		}
	}

	//constructor de copiere
	Inregistrare(const Inregistrare& x)
	{
		if (x.capacitate > 0)
		{
			this->capacitate = x.capacitate;
			this->valoare = new string[x.capacitate];
			for (int i = 0; i < x.capacitate; i++)
			{
				this->valoare[i] = x.valoare[i];
			}
		}
		else
		{
			this->valoare = nullptr;
			this->capacitate = 0;
		}
	}

	////supraincarcare operator =
	Inregistrare& operator=(Inregistrare& x)
	{
		if (this->valoare != nullptr)
		{
			delete[] this->valoare;
		}

		if (x.capacitate > 0)
		{
			this->capacitate = x.capacitate;
			this->valoare = new string[x.capacitate];
			for (int i = 0; i < x.capacitate; i++)
			{
				this->valoare[i] = x.valoare[i];
			}
		}
		else
		{
			this->valoare = nullptr;
			this->capacitate = 0;
		}

		return *this;
	}

	//destructor
	~Inregistrare()
	{
		if (this->valoare != nullptr)
		{
			delete[] this->valoare;
		}
	}

	//getter valoare
	string* getValoare()
	{
		return this->valoare;
	}

	//getter capacitate
	int getCapacitate()
	{
		return this->capacitate;
	}

	//setter valoare
	void setValoare(string* valoare)
	{
		if (valoare != nullptr)
		{
			for (int i = 0; i < this->capacitate; i++)
			{
				this->valoare[i] = valoare[i];
			}
		}
		else
		{
			this->valoare = nullptr;
		}
	}

	//setter capacitate
	void setCapacitate(int capacitate)
	{
		if (capacitate > 0)
		{
			this->capacitate = capacitate;
		}
		else
		{
			this->capacitate = 0;
		}
	}

	friend ostream& operator<<(ostream& out, Inregistrare);
	friend istream& operator>>(istream& in, Inregistrare&);
};

//supraincarcare operator << pentru clasa Inregistrare
ostream& operator<<(ostream& out, Inregistrare x)
{
	out << endl;
	for (int i = 0; i < x.capacitate; i++)
	{
		out << x.valoare[i] << "\t";
	}
	out << endl;
}

//supraincarcare operator >> pentru clasa Inregistrare
istream& operator>>(istream& in, Inregistrare& x)
{
	//de facut
}

class Database
{
private:
	Tabela* tabela;
	int nr_tabele = 0;
public:
	//constructor implicit
	Database()
	{
		this->tabela = nullptr;
		this->nr_tabele = 0;
	}

	//constructor cu parametrii
	Database(Tabela* tabela, int nr_tabele)
	{
		if (tabela != nullptr)
		{
			this->tabela = tabela;
			this->nr_tabele=nr_tabele;
		}
		else
		{
			this->tabela = nullptr;
			this->nr_tabele = 0;
		}
	}

	//constructor de copiere
	Database(const Database& database)
	{
		if (database.tabela != nullptr)
		{
			this->tabela = database.tabela;
			this->nr_tabele = database.nr_tabele;
		}
		else
		{
			this->tabela = nullptr;
		}
	}

	//supraincarcare operator =
	Database& operator=(Database& database)
	{
		if (this->tabela != nullptr)
		{
			delete[] tabela;
		}
		if (database.tabela != nullptr)
		{
			this->tabela = new Tabela[nr_tabele];
			this->tabela = database.tabela;
			this->nr_tabele = database.nr_tabele;
		}
		else
		{
			this->tabela = nullptr;
		}
	}

	//destructor
	~Database()
	{
		if (this->tabela != nullptr)
		{
			delete[] this->tabela;
		}
	}
	
	//functie pentru generarea unei noi tabele
	void New_table(string x)
	{
		if (nr_tabele == 0)
		{
			nr_tabele++;
			tabela = new Tabela[nr_tabele];
			tabela->SetNume_tabela((char*x.c_str());
			tabela->SetNr_coloane(1);
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
			tabela->SetNume_tabela((char*)x.c_str());
		}
	}

	//functie pentru stergerea unei coloane
	void Drop_table(string x)
	{
		if (nr_tabele > 0)
		{
			Tabela auxi;
			Tabela* copie = new Tabela[nr_tabele];
			for (int i = 0; i < nr_tabele; i++)
			{
				if (x == tabela[i].GetNume_tabela())
				{
					auxi = tabela[i];
				}
			}
			for (int i = 0; i < nr_tabele; i++)
			{
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

	//functie pentru afisarea unei coloane
	void Display_table(string x)
	{
		for (int i = 0; i < nr_tabele; i++)
		{
			if (x == tabela[i].GetNume_tabela())
			{
				cout << tabela[i];
			}
		}
	}
	

	friend ostream& operator<<(ostream& out, Database);
	friend istream& operator>>(istream& in, Database&);
};

//supraincarcarea operatorului << pentru clasa Database					       
ostream& operator<<(ostream& out, Database d)
{
	for (int i = 0; i < d.nr_tabele; i++)
	{
		out << d.tabela[i] << endl;
	}
	return out;
}

//supraincarcarea operatorului >> pentru clasa Database					       
istream& operator>>(istream& in, Database& d)
{
	for (int i = 0; i < d.nr_tabele; i++)
	{
		in >> d.tabela[i];
	}
	return in;
}

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
		cout << "UPDATE nume_tabela SET nume_coloana = valoare WHERE nume_coloana = valoare" << endl << endl;
		getline(cin, text_utilizator);
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

	//functie pentru compararea valorii introduse de utilizator
	void compara(string text_utilizator)
	{
		int gasit = -1;
		Database data;
		string text_comenzi[7] = { create, display, drop, insert, delete_from, select, update };
		while (text_utilizator != "STOP")
		{
			for (int i = 0; i < 7; i++)
			{
				gasit = text_utilizator.find(text_comenzi[i]);
				if (gasit != string::npos)
				{
					if (i == 0)
					{
						text_utilizator.erase(gasit, text_comenzi[i].length());
						string x;
						int capat1 = text_utilizator.find(" ")+1;
						int capat2 = text_utilizator.find(" ((");
						x = text_utilizator.substr(capat1, capat2);
						data.New_table(x);
						cout << "A fost creata tabela " << x << endl;
						getline(cin, text_utilizator);
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
	}
};

