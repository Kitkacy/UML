#ifndef DOKUMENT_H
#define DOKUMENT_H

#include <string>


class Dokument {
private:
	int id;
	std::string nazwa;
	int typ;
	int data;
	std::string lokalizacja;

public:
	Dokument(int id, std::string nazwa, int typ, int data, std::string lokalizacja);
	void stworzPlikDokumentu(std::string lokalizacja);
	bool weryfikujPoprawnosc();
	bool nadajID();
	bool dodajDoBazyDanych();
};

