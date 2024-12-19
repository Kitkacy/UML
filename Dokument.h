#ifndef DOKUMENT_H
#define DOKUMENT_H
#include <string>
using namespace std;

class Dokument {

private:
	int id;
	string nazwa;
	int typ;
	int data;
	string lokalizacja;

public:
	Dokument(int id, string nazwa, int typ, int data, string lokalizacja);

	bool dodajDoBazyDanych();

	bool nadajID();

	void weryfikujPoprawnosc();
};

#endif
