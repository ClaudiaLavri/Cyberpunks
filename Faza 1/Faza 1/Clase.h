#pragma once
#include <string>
using namespace std;

class Coloane
{
private:
	char* nume_coloana;
	char* tip;
	int dimensiune;
	char* val_implicita;
public:
	Coloane()
	{
		this->nume_coloana = new char[strlen("Coloana") + 1];
		strcpy_s(this->nume_coloana, strlen("Coloana") + 1, "Coloana");
		this->tip = new char[strlen("Necunoscut") + 1];
		strcpy_s(this->tip, strlen("Necunoscut") + 1, "Necunoscut");
		this->dimensiune = 0;
		this->val_implicita = new char[strlen("Necunoscuta") + 1];
		strcpy_s(this->val_implicita, strlen("Necunoscuta") + 1, "Necunoscuta");
	}

	Coloane(char* nume_coloana, char* tip, int dimensiune, char* val_implicita)
	{
		if (nume_coloana != nullptr)
		{
			this->nume_coloana = new char[strlen(nume_coloana) + 1];
			strcpy_s(this->nume_coloana, strlen(nume_coloana) + 1, nume_coloana);
		}
		if (tip != nullptr)
		{
			this->tip = new char[strlen(tip) + 1];
			strcpy_s(this->tip, strlen(tip) + 1, tip);
		}
		this->dimensiune = dimensiune;
		if (val_implicita != nullptr)
		{
			this->val_implicita = new char[strlen(val_implicita) + 1];
			strcpy_s(this->val_implicita, strlen(val_implicita) + 1, val_implicita);
		}

	}

	Coloane(const Coloane& c)
	{
		if (c.nume_coloana != nullptr)
		{
			this->nume_coloana = new char[strlen(c.nume_coloana) + 1];
			strcpy_s(this->nume_coloana, strlen(c.nume_coloana) + 1, c.nume_coloana);
		}
		if (c.tip != nullptr)
		{
			this->tip = new char[strlen(c.tip) + 1];
			strcpy_s(this->tip, strlen(c.tip) + 1, c.tip);
		}
		this->dimensiune = c.dimensiune;
		if (c.val_implicita != nullptr)
		{
			this->val_implicita = new char[strlen(c.val_implicita) + 1];
			strcpy_s(this->val_implicita, strlen(c.val_implicita) + 1, c.val_implicita);
		}
	}

	Coloane operator=(Coloane c)
	{
		if (this->nume_coloana != nullptr)
		{
			delete[] this->nume_coloana;
		}
		if (this->tip != nullptr)
		{
			delete[] this->tip;
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
		if (c.tip != nullptr)
		{
			this->tip = new char[strlen(c.tip) + 1];
			strcpy_s(this->tip, strlen(c.tip) + 1, c.tip);
		}
		this->dimensiune = c.dimensiune;
		if (c.val_implicita != nullptr)
		{
			this->val_implicita = new char[strlen(c.val_implicita) + 1];
			strcpy_s(this->val_implicita, strlen(c.val_implicita) + 1, c.val_implicita);
		}
	}

	~Coloane()
	{
		if (this->nume_coloana != nullptr)
		{
			delete[] this->nume_coloana;
		}
		if (this->tip != nullptr)
		{
			delete[] this->tip;
		}
		if (this->val_implicita != nullptr)
		{
			delete[] this->val_implicita;
		}
	}

	void setNumeColoana(char* nume_coloana)
	{
		strcpy_s(this->nume_coloana, strlen(nume_coloana) + 1, nume_coloana);
	}

	void setTip(char* tip)
	{
		strcpy_s(this->tip, strlen(tip) + 1, tip);
	}

	void setDimensiune(int dimensiune)
	{
		this->dimensiune = dimensiune;
	}

	void setValImplicita(char* val_implicita)
	{
		strcpy_s(this->val_implicita, strlen(val_implicita) + 1, val_implicita);
	}

	char* getNumeColoana()
	{
		return this->nume_coloana;
	}

	char* getTip()
	{
		return this->tip;
	}

	int getDimensiune()
	{
		return this->dimensiune;
	}

	char* getValImplicita()
	{
		return this->val_implicita;
	}

	friend class Tabele;
};

class Inregistrari
{
private:
	Coloane* valoare;
public:


	friend class Coloane;
};