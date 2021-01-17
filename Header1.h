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

		if (c.dimensiune > 0)
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
		this->nume_coloana = new char[strlen(nume_coloana) + 1];
		if (nume_coloana != nullptr)
		{
			strcpy_s(this->nume_coloana, strlen(nume_coloana) + 1, nume_coloana);
		}
	}

	//setter tip_coloana
	void setTip(char* tip_coloana)
	{
		this->tip_coloana = new char[strlen(tip_coloana) + 1];
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
		this->val_implicita = new char[strlen(val_implicita) + 1];
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
		Coloana copie = *this;
		dimensiune--;
		return copie;
	}

	//supraincarcare operator +
	Coloana operator+(Coloana t)
	{
		Coloana copie = *this;
		copie.dimensiune = dimensiune + t.dimensiune;
		return copie;
	}

	//supraincarcare operator -
	/*Coloana operator-(Coloana t)
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
	}*/

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
		return  this->tip_coloana=t.tip_coloana ;
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

class Inregistrare
{
private:
	int id;
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
			this->valoare = new string[capacitate];
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

	//Supraincarcare operatori

	bool operator!()
	{
		return valoare != nullptr;
	}

	Inregistrare operator++()
	{
		capacitate++;
		return *this;
	}

	Inregistrare operator++(int i)
	{
		Inregistrare copie = *this;
		capacitate++;
		return copie;
	}

	Inregistrare operator--()
	{
		capacitate--;
		return *this;
	}

	Inregistrare operator--(int i)
	{
		Inregistrare copie = *this;
		capacitate--;
		return copie;
	}

	Inregistrare operator+(int x)
	{
		Inregistrare copie = *this;
		copie.capacitate = x + capacitate;
		return copie;
	}

	Inregistrare operator-(Inregistrare t)
	{
		Inregistrare copie = *this;
		if (capacitate >= t.capacitate)
		{
			copie.capacitate = capacitate - t.capacitate;
			return copie;
		}
		else
		{
			cout << "Capacitatea nu poate fi negativa" << endl;
		}
	}
	
	friend ostream& operator<<(ostream& out, Inregistrare);
	friend istream& operator>>(istream& in, Inregistrare&);
	friend class Tabela;
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
	return out;
}

//supraincarcare operator >> pentru clasa Inregistrare
istream& operator>>(istream& in, Inregistrare& x)
{
	cout << "Capacitate: ";
	in >> x.capacitate;
	cout << "Valori: ";
	in >> ws;
	x.valoare = new string[x.capacitate];
	for (int i = 0; i < x.capacitate; i++)
	{
		getline(in, x.valoare[i]);
	}
	return in;
}

class Tabela
{
private:
	char* nume_tabela;
	int nr_coloane;
	Coloana* col;
	int nr_inregistrari;
	Inregistrare* inreg;

public:
	//constructor implicit
	Tabela()
	{
		nume_tabela = new char[strlen("Tabel") + 1];
		strcpy_s(nume_tabela, strlen("Tabel") + 1, "Tabel");
		nr_coloane = 0;
		col = nullptr;
		nr_inregistrari = 0;
		inreg = nullptr;
	}
	
	//constructor cu parametrii
	Tabela(char* nume_tabela, int nr_coloane, Coloana* coloana, int nr_inregistrari, Inregistrare* inreg)
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
			this->col = nullptr;
		}

		this->nr_inregistrari = nr_inregistrari;
		if (nr_inregistrari > 0)
		{
			this->inreg = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < nr_inregistrari; i++)
			{
				this->inreg[i] = inreg[i];
			}
		}
		else
		{
			this->inreg = nullptr;
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

		if (inreg != nullptr)
		{
			delete[] inreg;
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

		if (t.nr_coloane > 0)
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

		if (t.nr_inregistrari > 0)
		{
			this->nr_inregistrari = t.nr_inregistrari;
			this->inreg = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < t.nr_inregistrari; i++)
			{
				this->inreg[i] = t.inreg[i];
			}
		}
		else
		{
			inreg = nullptr;
			nr_inregistrari = 0;
		}
	}

	//supraincarcare operator =
	Tabela& operator=(const Tabela& t)
	{
		if (this->nume_tabela != nullptr)
		{
			delete[] this->nume_tabela;
		}

		if (col != nullptr)
		{
			delete[] this->col;
		}
		if (t.nume_tabela != nullptr)
		{
			this->nume_tabela = new char[strlen(t.nume_tabela) + 1];
			strcpy_s(this->nume_tabela, strlen(t.nume_tabela) + 1, t.nume_tabela);
		}
		else
		{
			this->nume_tabela = nullptr;
		}

		if (t.nr_coloane > 0)
		{
			this->nr_coloane = t.nr_coloane;
			this->col = new Coloana[nr_coloane];
			for (int i = 0; i < t.nr_coloane; i++)
			{
				this->col[i] = t.col[i];
			}
		}
		if (t.nr_inregistrari > 0)
		{
			this->nr_inregistrari = t.nr_inregistrari;
			this->inreg = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < t.nr_inregistrari; i++)
			{
				this->inreg[i] = t.inreg[i];
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

	//setter nr_coloane
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
			this->col = nullptr;
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

	//setter inreg
	void SetInregistrare(Inregistrare* inreg, int nr_inregistrari)
	{
		if (nr_inregistrari > 0 && inreg != nullptr)
		{
			this->inreg = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < nr_inregistrari; i++)
			{
				this->inreg[i] = inreg[i];
			}
		}
		else
		{
			this->inreg = nullptr;
		}
	}

	//getter inreg
	Inregistrare* GetInregistrare()
	{
		if (this->inreg != nullptr)
		{
			return inreg;
		}
		else
		{
			return 0;
		}
	}
	
	//setter nr_inregistrari
	void SetNr_inregistrari(int nr_inregistrari)
	{
		if (nr_inregistrari > 0)
		{
			this->nr_inregistrari = nr_inregistrari;
		}
	}

	//getter nr_inregistrari
	int GetNr_inregistrari()
	{
		if (this->nr_inregistrari > 0)
		{
			return this->nr_inregistrari;
		}
		else
		{
			return 0;
		}
	}

	//supraincarcarea operatorului !
	bool operator!()
	{
		return nume_tabela != 0;
	}

	//supraincarcarea operatorului ++
	Tabela operator++()
	{
		nr_coloane++;
		return *this;
	}

	//supraincarcarea operatorului ++(int i)
	Tabela operator++(int i)
	{
		Tabela copie = *this;
		this->nr_coloane++;
		return copie;
	}
	
 	//supraincarcarea operatorului --
	Tabela operator--()
	{
		nr_coloane--;
		return *this;
	}

	//supraincarcarea operatorului --(int i)
	Tabela operator--(int i)
	{
		Tabela copie = *this;
		nr_coloane--;
		return copie;
	}

	//supraincarcarea operatorului +
	Tabela operator+(int valoare)
	{
		Tabela copie = *this;
		copie.nr_coloane += valoare;
		copie.col = new Coloana[copie.nr_coloane];
		for(int i=nr_coloane;i<copie.nr_coloane;i++)
		{ 
			cin >> copie.col[i];
		}
		return copie;
	}

	//supraincarcarea operatorului -
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
			cout << "Numarul de coloane va fi negativ" << endl;
		}
	}

	//supraincarcarea operatorului []
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

	//supraincarcarea operatorului ()
	operator int()
	{
		return nr_coloane;
	}

	//supraincarcarea operatorului >
	bool operator >(Tabela t)
	{
		return this->nr_coloane < t.nr_coloane;
	}

	//supraincarcarea operatorului ==
	bool operator==(Tabela& t)
	{
		return  this->nr_coloane = t.nr_coloane;
	}

	//functie pentru introducere noii coloane in tabela
	void New_coloana(string x, string tip, int dimensiune, string val_implicita, int i)
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
			col[i].setNumeColoana((char*)x.c_str());
			col[i].setDimensiune(dimensiune);
			col[i].setTip((char*)tip.c_str());
			col[i].setValImplicita((char*)val_implicita.c_str());
		}
	}

	//functie pentru alocare memorie pentru coloane
	void Alocare_col(int nr_col)
	{
		col = new Coloana[nr_col];
	}

	//functie pentru introducere inregistrari
	void New_inregistrare(string* x)
	{
		if (nr_inregistrari == 0)
		{
			nr_inregistrari++;
			inreg = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < nr_inregistrari; i++)
			{
				//Inregistrare inreg(x, nr_coloane);
				inreg[i].setCapacitate(nr_coloane);
				inreg[i].setValoare(x);
				inreg[i].id = nr_inregistrari;
			}
		}
		else
		{
			Inregistrare* copie = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < nr_inregistrari; i++)
			{
				copie[i] = inreg[i];
			}
			delete[] inreg;
			nr_inregistrari++;
			inreg = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < nr_inregistrari - 1; i++)
			{
				inreg[i] = copie[i];
			}
			delete[] copie;
			inreg[nr_inregistrari-1].setCapacitate(nr_coloane);
			inreg[nr_inregistrari-1].setValoare(x);
			inreg[nr_inregistrari-1].id = nr_inregistrari;
		}
	}
	
	//functie pentru afisarea inregistrarilor
	void Afisare_inregistrare(string* nume_col, int numar)
	{
		for (int j = 0; j < numar; j++)
		{
			for (int i = 0; i < nr_coloane; i++)
			{

				if (strcmp(col[i].getNumeColoana(), nume_col[j].c_str()) == 0)
				{
					cout << nume_col[j] << "\t" << "\t";
				}
			}
		}
		cout << endl;
		int* verificare = new int[numar];
		for (int i = 0; i < numar; i++)
		{
			verificare[i] = 0;
		}
		for (int k = 0; k < nr_inregistrari; k++)
		{
			for (int j = 0; j < numar; j++)
			{
				for (int i = 0; i < nr_coloane; i++)
				{
					if (strcmp(col[i].getNumeColoana(), nume_col[j].c_str()) == 0)
					{
						verificare[j] = 1;
						cout << inreg[k].valoare[i] << "\t" << "\t";
					}
				}
			}
			cout << endl;
		}
		for (int i = 0; i < numar; i++)
		{
			if (verificare[i] == 0)
			{
				cout << "Nu exista coloana " << nume_col[i] << endl;
			}
		}
	}
	
	//functie pentru afisarea tuturor inregistrarilor dintr-o tabela
	void Afisare_all_inregistrare()
	{
		for (int i = 0; i < nr_coloane; i++)
		{
			cout << col[i].getNumeColoana() << "\t" << "\t";
		}
		cout << endl;
		for (int i = 0; i < nr_inregistrari; i++)
		{
			for (int j = 0; j < nr_coloane; j++)
			{
				cout << inreg[i].valoare[j] << "\t" << "\t";
			}
			cout << endl;
		}
	}
	
	//functie pentru stergerea unei inregistrari
	void Delete_inreg(string nume_inregistrare, string nume_coloana)
	{
		Inregistrare* copie = new Inregistrare[nr_inregistrari];
		int cont = 0;
		int cont_inreg = 0;
		bool verificare_inregistrare = false;
		bool verificare_coloana = false;
		for (int i = 0; i < nr_coloane; i++)
		{
			if (strcmp(this->col[i].getNumeColoana(), nume_coloana.c_str()) == 0)
			{
				verificare_coloana = true;
				for (int j = 0; j < nr_inregistrari; j++)
				{
					if (this->inreg[j].valoare[i] != nume_inregistrare)
					{
						cont_inreg++;
						copie[cont] = inreg[j];
						cont++;
					}
					else
					{
						verificare_inregistrare = true;
					}
				}
			}
		}
		delete[] inreg;
		if (verificare_coloana == true && verificare_inregistrare == true)
		{
			nr_inregistrari = nr_inregistrari - cont_inreg;
			inreg = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < nr_inregistrari; i++)
			{
				inreg[i] = copie[i];
			}
			cout << "A fost actualizata o tabela" << endl;
		}
		else if (verificare_coloana == false)
		{
			inreg = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < nr_inregistrari; i++)
			{
				inreg[i] = copie[i];
			}
			cout << "Nu extista coloana " << nume_coloana << endl;
		}
		else if (verificare_inregistrare == false)
		{
			inreg = new Inregistrare[nr_inregistrari];
			for (int i = 0; i < nr_inregistrari; i++)
			{
				inreg[i] = copie[i];
			}
			cout << "Nu extista inregistrarea " << nume_inregistrare << endl;
		}
	}
	
	void Update_coloana(string nume_coloana1, string val_noua, string nume_coloana2, string val, int& nr_modificari)
	{
		bool ok = false;
		nr_modificari = 0;
		for (int i = 0; i < nr_coloane; i++)
		{
			if (strcmp(this->col[i].getNumeColoana(), nume_coloana1.c_str()) == 0)
			{
				ok = true;
			}
		}
		if (ok == false)
		{
			cout << "Nu exista coloana " << nume_coloana1 << endl;
		}
		if (ok == true)
		{
			int numar_coloana1;
			int numar_coloana2;
			for (int i = 0; i < nr_coloane; i++)
			{
				if (strcmp(this->col[i].getNumeColoana(), nume_coloana1.c_str()) == 0)
				{
					numar_coloana1 = i;
				}
				if (strcmp(this->col[i].getNumeColoana(), nume_coloana2.c_str()) == 0)
				{
					numar_coloana2 = i;
				}
			}

			for (int i = 0; i < inreg[i].getCapacitate(); i++)
			{
				bool ok = false;
				for (int j = 0; j < nr_inregistrari; j++)
				{
					if (inreg[j].valoare[numar_coloana2] == val)
					{
						inreg[j].valoare[numar_coloana1] = val_noua;
						ok = true;
					}
					if (ok == true)
					{
						nr_modificari++;
					}
				}
			}
			nr_modificari = (int)(nr_modificari / nr_coloane);
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
		return *this;
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
	void New_table(string x, char** nume_coloane, char** tip_coloane, int* dimensiune_coloane, char** valori_implicite, int nr_col)
	{
		if (nr_tabele == 0)
		{
			nr_tabele++;
			tabela = new Tabela[nr_tabele];
			tabela->SetNume_tabela((char*)x.c_str());
			tabela->SetNr_coloane(nr_col);
			tabela->Alocare_col(nr_col);
			for (int i = 0; i < nr_col; i++)
			{
				tabela->New_coloana(nume_coloane[i], tip_coloane[i], dimensiune_coloane[i], valori_implicite[i], i);
			}
			cout << "A fost creata tabela " << x << endl;
		}
		else
		{
			bool verificare = true;
			for (int i = 0;  i < this->nr_tabele; i++)
			{
				if (x == tabela[i].GetNume_tabela())
				{
					cout << "Tabela " << x << " exista deja"<<endl;
					verificare = false;
				}
			}
			if (verificare == true)
			{
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
				tabela[nr_tabele - 1].SetNume_tabela((char*)x.c_str());
				tabela[nr_tabele - 1].SetNr_coloane(nr_col);
				tabela[nr_tabele - 1].Alocare_col(nr_col);
				for (int i = 0; i < nr_col; i++)
				{
					tabela[nr_tabele - 1].New_coloana(nume_coloane[i], tip_coloane[i], dimensiune_coloane[i], valori_implicite[i], i);
				}
				cout << "A fost creata tabela " << x << endl;
			}
		}
	}
	//functie pentru stergerea unei coloane
	void Drop_table(string x)
	{
		if (nr_tabele > 0)
		{
			Tabela auxi;
			Tabela* copie = new Tabela[nr_tabele];
			int cont = 0;
			for (int i = 0; i < nr_tabele; i++)
			{
				if (x == tabela[i].GetNume_tabela())
				{
					auxi = tabela[i];
				}
			}
			for (int i = 0; i < nr_tabele; i++)
			{
				if (strcmp(tabela[i].GetNume_tabela(), auxi.GetNume_tabela()) != 0)
				{
					copie[cont] = tabela[i];
					cont++;
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
			if (strcmp(auxi.GetNume_tabela(), "Tabel") != 0)

			{
				cout << "A fost stearsa tabela " << x << endl;
			}
			else
			{
				cout << "Nu exista tabela cu numele " << x << endl;
			}
		}
		else
		{
			cout << "Nu exista nicio tabela"<<endl;
		}
	}
	
	//functie pentru afisarea tabelei cu numele x
	void Display_table(string x)
	{
		bool verificare = false;
		for (int i = 0; i < nr_tabele; i++)
		{
			if (x == tabela[i].GetNume_tabela())
			{
				verificare = true;
				cout << tabela[i];
				cout << endl;
			}
		}
		if (verificare == false)
		{
			cout << "Nu exista tabela " << x << endl;
		}
	}
	
	//functie pentru inserarea unei inregistrari in tabela
	void Insert_in_tabela(string nume_tabela, string* x)
	{
		bool verificare = false;
		for (int i = 0; i < nr_tabele; i++)
		{
			if (tabela[i].GetNume_tabela() == nume_tabela)
			{
				tabela[i].New_inregistrare(x);
				verificare = true;
			}
		}
		if (verificare == false)
		{
			cout << "Nu exista tabela " << nume_tabela;
			cout << endl;
		}
	}
	
	//functie pentru stergerea coloanei nume_coloana din tabela nume_tabela
	void Delete_from_table(string nume_tabela, string nume_inregistrare, string nume_coloana)
	{
		for (int i = 0; i < nr_tabele; i++)
		{
			if (strcmp(tabela[i].GetNume_tabela(), nume_tabela.c_str()) == 0)
			{
				tabela[i].Delete_inreg(nume_inregistrare, nume_coloana);
			}
		}
	}
	
	//functie pentru afisarea inregistrarilor din coloana nume_tabela
	void Select_din_tabela(string nume_tabela, string* nume_coloane, int numar)
	{
		bool verificare = false;
		for (int i = 0; i < nr_tabele; i++)
		{
			if (strcmp(tabela[i].GetNume_tabela(), nume_tabela.c_str()) == 0)
			{
				verificare = true;
				tabela[i].Afisare_inregistrare(nume_coloane, numar);
			}
		}
		if (verificare == false)
		{
			cout << "Nu exista tabela " << nume_tabela<<endl;
		}
	}

	//functie pentru afisarea tuturor inregistrarilor din coloana nume_tabela
	void Select_all_din_tabela(string nume_tabela)
	{
		bool verificare = false;
		for (int i = 0; i < nr_tabele; i++)
		{
			if (strcmp(tabela[i].GetNume_tabela(), nume_tabela.c_str()) == 0)
			{
				verificare = true;
				tabela[i].Afisare_all_inregistrare();
			}
		}
		if (verificare == false)
		{
			cout << "Nu extista tabela " << nume_tabela << endl;
		}
	}
	
	void Update_coloana_din_tabela(string nume_tabela, string nume_coloana1, string val, string nume_coloana2, string val_noua, int nr_modificari)
	{
		bool verificare = false;
		for (int i = 0; i < nr_tabele; i++)
		{
			if (strcmp(tabela->GetNume_tabela(), nume_tabela.c_str()) == 0)
			{
				verificare = true;
				tabela[i].Update_coloana(nume_coloana1, val, nume_coloana2, val_noua, nr_modificari);
				cout << "Au fost modificate " << nr_modificari << " inregistrari in coloana " << nume_coloana2;
			}
		}
		if (verificare == false)
		{
			cout << "Nu extista tabela " << nume_tabela << endl;
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

	bool check_create(string text_utilizator)
	{
		bool check = true;
		int paranteze1 = 0;
		int paranteze2 = 0;
		
		for (int i = 0; i < text_utilizator.length(); i++)
		{
			if (text_utilizator[i] == '(' && text_utilizator[i+1] == '(')
			{
				paranteze1++;
			}
			if (text_utilizator[i] == ')' && text_utilizator[i + 1] == ')')
			{
				paranteze2++;
			}
		}
		if (text_utilizator.substr(0, 13) != "CREATE TABLE ")
		{
			check = false;
			return check;
		}
		text_utilizator.erase(0, 13);
		if (paranteze1 != 1)
		{
			check = false;
			return check;
		}
		if (paranteze2 != 1)
		{
			check = false;
			return check;
		}
		int pos = text_utilizator.find(" ((");
		string nume_tabela = text_utilizator.substr(0, pos);
		for (int i = 0; i < nume_tabela.length(); i++)
		{
			if (nume_tabela[i] == ' ')
			{
				check = false;
				return check;
			}
		}
		text_utilizator.erase(0, nume_tabela.length());
		text_utilizator.erase(0, strlen(" (("));
		int spatii = 0;
		int virgule = 0;
		int parantezainchisa = 0;
		for (int i = 0; i < text_utilizator.length(); i++)
		{
			if (text_utilizator[i] == ',' && text_utilizator[i+1] != ' ')
			{
				check = false;
				return check;
			}
			if (text_utilizator[i] == ' ')
			{
				spatii++;
			}
			if (text_utilizator[i] == ',')
			{
				virgule++;
			}
			if (text_utilizator[i] == ')')
			{
				parantezainchisa++;
			}
		}
		if (spatii != virgule)
		{
			check = false;
			return check;
		}
		int nr_coloane = parantezainchisa - 1;
		for (int i = 0; i < nr_coloane; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (j == 3)
				{
					pos = text_utilizator.find(')');
				}
				else
				{
					pos = text_utilizator.find(',');
				}
				string info= text_utilizator.substr(0, pos);
				if (j == 2)
				{
					for (int t = 0; t < info.length(); t++)
					{
						if (!(info[t] >= '0' && info[t] <= '9'))
						{
							check = false;
							return check;
						}
					}
				}
				else
				{
					for (int t = 0; t < info.length(); t++)
					{
						if (!((info[t] >= 'A' && info[t] <= 'Z') || (info[t] >= 'a' && info[t] <= 'z') || (info[t] >= '0' && info[t] <= '9')))
						{
							check = false;
							return check;
						}
					}
				}
				text_utilizator.erase(0, info.length());
				if (j == 3)
				{
					if (i == nr_coloane - 1)
					{
						if (text_utilizator.substr(0, 2) != "))")
						{
							check = false;
							return check;
						}
						text_utilizator.erase(0, strlen("))"));
					}
					else
					{
						if (text_utilizator.substr(0, 4) != "), (")
						{
							check = false;
							return check;
						}
						text_utilizator.erase(0, strlen("), ("));
					}
				}
				else 
				{
					if (text_utilizator.substr(0, 2) != ", ")
					{
						check = false;
						return check;
					}
					text_utilizator.erase(0, strlen(", "));
				}
			}
		}
		if (text_utilizator != "")
		{
			check = false;
			return check;
		}
		return check;
	}
	
	bool check_display(string text_utilizator)
	{
		bool check = true;
		if (text_utilizator.substr(0, 14) != "DISPLAY TABLE ")
		{
			check = false;
			return check;
		}
		text_utilizator.erase(0, 14);
		string nume_tabela = text_utilizator.substr(0);
		for (int i= 0; i < nume_tabela.length(); i++)
		{
			if (!((nume_tabela[i] >= 'A' && nume_tabela[i] <= 'Z') || (nume_tabela[i] >= 'a' && nume_tabela[i] <= 'z') || (nume_tabela[i] >= '0' && nume_tabela[i] <= '9')))
			{
				check = false;
				return check;
			}
		}
		text_utilizator.erase(0, nume_tabela.length());
		if (text_utilizator != "")
		{
			check = false;
			return check;
		}
		return check;
	}
	
	bool check_drop(string text_utilizator)
	{
		bool check = true;
		if (text_utilizator.substr(0, 11) != "DROP TABLE ")
		{
			check = false;
			return check;
		}
		text_utilizator.erase(0, 11);
		string nume_tabela = text_utilizator.substr(0);
		for (int i = 0; i < nume_tabela.length(); i++)
		{
			if (!((nume_tabela[i] >= 'A' && nume_tabela[i] <= 'Z') || (nume_tabela[i] >= 'a' && nume_tabela[i] <= 'z') || (nume_tabela[i] >= '0' && nume_tabela[i] <= '9')))
			{
				check = false;
				return check;
			}
		}
		text_utilizator.erase(0, nume_tabela.length());
		if (text_utilizator != "")
		{
			check = false;
			return check;
		}
		return check;
	}
	
	bool check_insert(string text_utilizator)
	{
		bool check = true;
		if (text_utilizator.substr(0, 12) != "INSERT INTO ")
		{
			check = false;
			return check;
		}
		text_utilizator.erase(0, 12);
		int parantezadeschisa = 0;
		int parantezainchisa = 0;
		int values = 0;
		for (int i = 0; i < text_utilizator.length(); i++)
		{
			if (text_utilizator[i] == '(')
			{
				parantezadeschisa++;
			}
			if (text_utilizator[i] == ')')
			{
				parantezainchisa++;
			}
			if (text_utilizator[i] == 'V' && text_utilizator[i + 1] == 'A' && text_utilizator[i + 2] == 'L' && text_utilizator[i + 3] == 'U' && text_utilizator[i + 4] == 'E' && text_utilizator[i + 5] == 'S')
			{
				values++;
			}
		}
		if (parantezadeschisa != 1 || parantezainchisa != 1)
		{
			check = false;
			return check;
		}
		if (values != 1)
		{
			check = false;
			return check;
		}
		int pos = text_utilizator.find(" V");
		string nume_tabela = text_utilizator.substr(0, pos);
		for (int i = 0; i < nume_tabela.length(); i++)
		{
			if (!((nume_tabela[i] >= 'A' && nume_tabela[i] <= 'Z') || (nume_tabela[i] >= 'a' && nume_tabela[i] <= 'z') || (nume_tabela[i] >= '0' && nume_tabela[i] <= '9')))
			{
				check = false;
				return check;
			}
		}
		text_utilizator.erase(0, nume_tabela.length());
		text_utilizator.erase(0, strlen(" VALUES("));
		int nr_valori = 0;
		for (int i = 0; i < text_utilizator.length(); i++)
		{
			if (text_utilizator[i] == ',')
			{
				nr_valori++;
			}
			if (text_utilizator[i] == ',' && text_utilizator[i + 1] != ' ')
			{
				check = false;
				return check;
			}
		}
		nr_valori++;
		for (int i = 0; i < nr_valori; i++)
		{
			if (i == nr_valori - 1)
			{
				pos = text_utilizator.find(')');
			}
			else
			{
				pos = text_utilizator.find(',');
			}
			string info = text_utilizator.substr(0, pos);
			for (int t = 0; t < info.length(); t++)
			{
				if (!((info[t] >= 'A' && info[t] <= 'Z') || (info[t] >= 'a' && info[t] <= 'z') || (info[t] >= '0' && info[t] <= '9')))
				{
					check = false;
					return check;
				}
			}
			text_utilizator.erase(0, info.length());
			if (i == nr_valori - 1)
			{
				if (text_utilizator.substr(0, 1) != ")")
				{
					check = false;
					return check;
				}
				text_utilizator.erase(0, strlen(")"));
			}
			else
			{
				if (text_utilizator.substr(0, 2) != ", ")
				{
					check = false;
					return check;
				}
				text_utilizator.erase(0, strlen(", "));
			}
		}
		if (text_utilizator != "")
		{
			check = false;
			return check;
		}
		return check;
	}
	
	//functie pentru compararea valorii introduse de utilizator
	void compara()
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
						bool verifica = check_create(text_utilizator);
						if (verifica == false)
						{
							cout << "Comanda este scrisa gresit!" << endl;
							cout<< "Structura este: CREATE TABLE table_name ((nume_coloana_1, tip, dimensiune, valoare_implicita), (nume_coloana_2, tip, dimensiune, valoare_implicita), ...) " << endl;
						}
						if (verifica == true)
						{
						text_utilizator.erase(gasit, text_comenzi[i].length());
						string x;
						int capat1 = text_utilizator.find(" ") + 1;
						int capat2 = text_utilizator.find(" ((") - 1;
						x = text_utilizator.substr(capat1, capat2);
						int nr_col = 0;
						nr_col = std::count(text_utilizator.begin(), text_utilizator.end(), '(') - 1;
						char** nume_coloane = new char* [nr_col];
						for (int i = 0; i < nr_col; i++)
						{
							nume_coloane[i] = new char[nr_col];
						}
						char** tip_coloane = new char* [nr_col];
						for (int i = 0; i < nr_col; i++)
						{
							tip_coloane[i] = new char[nr_col];
						}
						int* dimensiune_coloane = new int[nr_col];
						char** valori_implicite = new char* [nr_col];
						for (int i = 0; i < nr_col; i++)
						{
							valori_implicite[i] = new char[nr_col];
						}
						text_utilizator.erase(0, x.length());
						text_utilizator.erase(0, strlen(" ((") + 1);
						for (int j = 0; j < nr_col; j++)
						{
							int p = 0;
							int verificare = 0;

							while (text_utilizator[p] != ')')
							{
								if (text_utilizator[p] == ',')
								{
									verificare++;
								}
								p++;
							}
							if (verificare != 3)
							{
								cout << "Comanda scrisa incorect!" << endl;
								break;
							}

							int pos = text_utilizator.find(',');
							char* nume = new char[pos + 1];
							strcpy_s(nume, pos + 1, (char*)(text_utilizator.substr(0, pos)).c_str());
							strcpy_s(nume_coloane[j], strlen(nume) + 1, nume);
							text_utilizator.erase(0, strlen(nume));
							text_utilizator.erase(0, strlen(", "));

							pos = text_utilizator.find(',');
							char* tip = new char[pos + 1];
							strcpy_s(tip, pos + 1, (char*)(text_utilizator.substr(0, pos)).c_str());
							strcpy_s(tip_coloane[j], strlen(tip) + 1, tip);
							text_utilizator.erase(0, strlen(tip));
							text_utilizator.erase(0, strlen(", "));

							pos = text_utilizator.find(',');
							int dim = std::stoi(text_utilizator.substr(0, pos));
							dimensiune_coloane[j] = dim;
							text_utilizator.erase(0, text_utilizator.substr(0, pos).length());
							text_utilizator.erase(0, strlen(", "));

							pos = text_utilizator.find(')');
							char* valoare = new char[pos + 1];
							strcpy_s(valoare, pos + 1, (char*)(text_utilizator.substr(0, pos)).c_str());
							strcpy_s(valori_implicite[j], strlen(valoare) + 1, valoare);
							text_utilizator.erase(0, strlen(valoare));

							if (text_utilizator.substr(0, text_utilizator.length()) == "))")
							{
								break;
							}
							text_utilizator.erase(0, strlen("), ("));
						}
						data.New_table(x, nume_coloane, tip_coloane, dimensiune_coloane, valori_implicite, nr_col);
						}
						getline(cin, text_utilizator);
					}
					if (i == 1)
					{
						bool verifica = check_display(text_utilizator);
						if (verifica == false)
						{
							cout << "Comanda este scrisa gresit!" << endl;
							cout << "Structura este: DISPLAY TABLE table_name" << endl;
						}
						if (verifica == true)
						{
						text_utilizator.erase(gasit, text_comenzi[i].length());
						string x;
						int capat1 = text_utilizator.find(" ") + 1;
						x = text_utilizator.substr(capat1);
						data.Display_table(x);
						}
						getline(cin, text_utilizator);
					}
					if (i == 2)
					{
						bool verifica = check_drop(text_utilizator);
						if (verifica == false)
						{
							cout << "Comanda este scrisa gresit!" << endl;
							cout << "Structura este: DROP TABLE table_name" << endl;
						}
						if (verifica == true)
						{
						text_utilizator.erase(gasit, text_comenzi[i].length());
						string x;
						int capat1 = text_utilizator.find(" ") + 1;
						x = text_utilizator.substr(capat1);
						data.Drop_table(x);
						}
						getline(cin, text_utilizator);
					}
					if (i == 3)
					{
						bool verifica = check_insert(text_utilizator);
						if (verifica == false)
						{
							cout << "Comanda este scrisa gresit!" << endl;
							cout << "Structura este: INSERT INTO table_name VALUES(...)" << endl;
						}
						if (verifica == true)
						{
						text_utilizator.erase(gasit, text_comenzi[i].length());
						string x;
						int capat1 = text_utilizator.find(" ") + 1;
						int capat2 = text_utilizator.find(" V") - 1;
						x = text_utilizator.substr(capat1, capat2);
						text_utilizator.erase(0, x.length());
						text_utilizator.erase(0, strlen(" VALUES(") + 1);

						int p = 0;
						int nr_valori = 0;

						while (text_utilizator[p] != ')')
						{
							if (text_utilizator[p] == ',')
							{
								nr_valori++;
							}
							p++;
						}
						nr_valori++;

						string* valori = new string[nr_valori];
						for (int j = 0; j < nr_valori; j++)
						{
							int pos;
							if (j == nr_valori - 1)
							{
								pos = text_utilizator.find(')');
							}
							else
							{
								pos = text_utilizator.find(',');
							}
							string valoare = text_utilizator.substr(0, pos);
							valori[j] = valoare;
							text_utilizator.erase(0, valoare.length());
							if (j == nr_valori - 1)
							{
								break;
							}
							text_utilizator.erase(0, strlen(", "));
						}
						data.Insert_in_tabela(x, valori);
						}
						getline(cin, text_utilizator);
					}
					if (i == 4)
					{
						text_utilizator.erase(gasit, text_comenzi[i].length());
						string x;
						int capat1 = text_utilizator.find(" ") + 1;
						int capat2 = text_utilizator.find(" W") - 1;
						x = text_utilizator.substr(capat1, capat2);
						text_utilizator.erase(0, x.length());
						text_utilizator.erase(0, strlen(" WHERE ") + 1);
						int pos = text_utilizator.find(" =");
						string nume_coloana = text_utilizator.substr(0, pos);
						text_utilizator.erase(0, nume_coloana.length());
						text_utilizator.erase(0, strlen(" = "));
						string nume_inregistrare = text_utilizator.substr(0);
						data.Delete_from_table(x, nume_inregistrare, nume_coloana);
						getline(cin, text_utilizator);
					}
					if (i == 5)
					{
						text_utilizator.erase(gasit, text_comenzi[i].length() + 1);
						string continuare;
						int k = 1;
						continuare = text_utilizator.substr(0, 1);
						int nr_coloane;
						string* nume_coloane = nullptr;
						if (continuare == "A")
						{
							k = 2;
						}
						if (k == 1)
						{
							text_utilizator.erase(0, strlen("("));
							int p = 0;
							nr_coloane = 0;
							while (text_utilizator[p] != ')')
							{
								if (text_utilizator[p] == ',')
								{
									nr_coloane++;
								}
								p++;
							}
							nr_coloane++;
							nume_coloane = new string[nr_coloane];
							for (int j = 0; j < nr_coloane; j++)
                        	    			{
                                				int pos;
                                				string nume;
                              		  			if (j == nr_coloane - 1)
                                				{
                                    					pos = text_utilizator.find(')');
                                  	  				nume = text_utilizator.substr(0, pos);
                                	    				nume_coloane[j] = nume;
									text_utilizator.erase(0, nume.length());
									text_utilizator.erase(0, strlen(") FROM "));
                                    					break;
                                				}
                               		 			pos = text_utilizator.find(',');
                              		  			nume = text_utilizator.substr(0, pos);
                              		  			nume_coloane[j] = nume;
                              		  			text_utilizator.erase(0, nume.length());
								if (text_utilizator.substr(0, 3) == ") F")
								{
									text_utilizator.erase(0, strlen(") FROM "));
									break;
								}
                	                			text_utilizator.erase(0, strlen(", "));
							}
						}
						if (k == 2)
						{
							text_utilizator.erase(0, strlen(" ALL FROM"));
						}
						string nume_tabela = text_utilizator.substr(0);
						if (k == 1)
						{
							data.Select_din_tabela(nume_tabela, nume_coloane, nr_coloane);
						}
						if (k == 2)
						{
							data.Select_all_din_tabela(nume_tabela);
						}
						getline(cin, text_utilizator);
					}
					if (i == 6)
					{
						text_utilizator.erase(gasit, text_comenzi[i].length());
						string x;
						int capat1 = text_utilizator.find(" ") + 1;
						int capat2 = text_utilizator.find(" S") - 1;
						x = text_utilizator.substr(capat1, capat2);
						text_utilizator.erase(0, x.length());
						text_utilizator.erase(0, strlen(" SET ") + 1);
						int pos = text_utilizator.find(" =");
						string nume_coloana1= text_utilizator.substr(0, pos);
						text_utilizator.erase(0, nume_coloana1.length());
						text_utilizator.erase(0, strlen(" = "));
						pos = text_utilizator.find(" W");
						string val_noua = text_utilizator.substr(0, pos);
						text_utilizator.erase(0, val_noua.length());
						text_utilizator.erase(0, strlen(" WHERE "));
						pos = text_utilizator.find(" =");
						string nume_coloana2 = text_utilizator.substr(0, pos);
						text_utilizator.erase(0, nume_coloana2.length());
						text_utilizator.erase(0, strlen(" = "));
						string val= text_utilizator.substr(0);
						int nr_modificari = 0;
						data.Update_coloana_din_tabela(x, nume_coloana1, val_noua, nume_coloana2, val, nr_modificari);
						cout << endl;
						getline(cin, text_utilizator);
					}
				}
			}	
		}
	}
};

