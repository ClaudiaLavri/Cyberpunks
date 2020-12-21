#pragma once
#include <string>
using namespace std;

class Tabele
{
private:
	char* nume_tabela;
	char** nume_coloane;
	int nr_coloane;

public:
	Tabele()
	{
		nume_tabela = new char[strlen("Tabel") + 1];
		strcpy_s(nume_tabela, strlen("Tabel")+1, "Tabel");
		nume_coloane = nullptr;
		nr_coloane = 0;		
	}

	Tabele(char* nume_tabela, char** nume_coloane, int nr_coloane)
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
		if (nr_coloane > 0)
		{
			this->nr_coloane = nr_coloane;
			this->nume_coloane = new char*[nr_coloane];
			for (int i = 0; i < nr_coloane; i++)
			{
				this->nume_coloane[i] = new char[nr_coloane];
			}
			for (int i = 0; i < nr_coloane; i++)
			{
				this->nume_coloane[i] = nume_coloane[i];
			}
		}
		else
		{
			this->nr_coloane=0;
			this->nume_coloane = nullptr;
		}
	}

	Tabele(const Tabele& t)
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
		if (t.nr_coloane != 0)
		{
			this->nr_coloane = t.nr_coloane;
			this->nume_coloane = new char*[t.nr_coloane];
			for (int i = 0; i < nr_coloane; i++)
			{
				this->nume_coloane[i] = new char[nr_coloane];
			}
			for (int i = 0; i < nr_coloane; i++)
			{
				this->nume_coloane[i] = t.nume_coloane[i];
			}
		}
		else
		{
			this->nume_coloane = nullptr;
			this->nr_coloane = 0;
		}
	}

	~Tabele()
	{
		for (int i = 0; i < nr_coloane; i++)
		{
			delete[] nume_coloane[i];
		}
		delete nume_coloane;

		if (nume_tabela != nullptr)
		{
			delete[] nume_tabela;
		}
	}

	Tabele& operator=(const Tabele& t)
	{
		for (int i = 0; i < nr_coloane; i++)
		{
			delete[] nume_coloane[i];
		}
		delete nume_coloane;
		if (nume_tabela != nullptr)
		{
			delete[] nume_tabela;
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
		if (t.nr_coloane != 0)
		{
			this->nr_coloane = t.nr_coloane;
			this->nume_coloane = new char* [t.nr_coloane];
			for (int i = 0; i < nr_coloane; i++)
			{
				this->nume_coloane[i] = new char[nr_coloane];
			}
			for (int i = 0; i < nr_coloane; i++)
			{
				this->nume_coloane[i] = t.nume_coloane[i];
			}
		}
		else
		{
			this->nume_coloane = nullptr;
			this->nr_coloane = 0;
		}
	}

	void SetNume_tabela(char* nume_tabela)
	{
		if (nume_tabela != nullptr)
		{
			this->nume_tabela = new char[strlen(nume_tabela)+1];
			strcpy_s(this->nume_tabela, strlen(nume_tabela) + 1, nume_tabela);
		}
		else
		{
			this->nume_tabela = nullptr;
		}
	}

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

	void SetNr_coloane(int nr_coloane)
	{
		if (nr_coloane != 0)
		{
			this->nr_coloane = nr_coloane;
		}
	}

	int GetNr_coloane()
	{
		if (this->nr_coloane != 0)
		{
			return this->nr_coloane;
		}
		else
		{
			return 0;
		}
	}

	/*void SetNume_coloane(char** nume_coloane, int nr_coloane)
	{
		if (nr_coloane != 0 && nume_coloane != nullptr)
		{
			this->nume_coloane = new char*[nr_coloane + 1];
			for (int i = 0; i < nr_coloane; i++)
			{
				this->nume_coloane[i] = new char[nr_coloane];
			}
			for (int i = 0; i < nr_coloane; i++)
			{
				this->nume_coloane[i] = nume_coloane[i];
			}
		}
	}*/

	/*char** GetNume_coloane(int )
	{
		if (nume_coloane != nullptr)

		{
			return this->nume_coloane;
		}
		else
		{
			return nullptr;
		}
	}*/

	
};

class Coloane
{
private:
	
public:

};

class Inregistrari
{
private:

public:

};

class Comenzi
{

};