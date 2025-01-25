#include "IModel.h"
#include "Obywatel.h"
#include "Urzednik.h"
#include "Wniosek.h"
#include "Spotkanie.h"
#include "Dokument.h"
#include "Fasada.h"
#include <iostream>


Obywatel IModel::getObywatel(int id) {
	// TODO - implement IModel::getObywatezl
	throw "Not yet implemented";
}

Urzednik IModel::getUrzednik(int id) {
	// TODO - implement IModel::getUrzednik
	throw "Not yet implemented";
}

Wniosek IModel::getWniosek(int id) {
	// TODO - implement IModel::getWniosek
	throw "Not yet implemented";
}

Spotkanie IModel::getSpotkanie(int id) {
	// TODO - implement IModel::getSpotkanie
	throw "Not yet implemented";
}

Dokument IModel::getDokument(int id) {
	// TODO - implement IModel::getDokument
	throw "Not yet implemented";
}

bool IModel::addSpotkanie(Spotkanie spotkanie) {
	// TODO - implement IModel::addSpotkanie
	throw "Not yet implemented";
}

bool IModel::addDokument(Dokument dokument) {
	// TODO - implement IModel::addDokument
	throw "Not yet implemented";
}

bool IModel::addWniosek(Wniosek wniosek) {
	// TODO - implement IModel::addWniosek
	throw "Not yet implemented";
}

Spotkanie IModel::umowWizyte(Obywatel danePetenta, int preferowanaData, std::string celWizyty) {
	Fasada fasada;
	return fasada.umowWizyte(danePetenta, preferowanaData, celWizyty);
}

void IModel::dodajDokument(int typ, std::string nazwa, std::string plikDokumentu) {
    Fasada fasada;
    fasada.createDokument(typ, nazwa, plikDokumentu);
}

void IModel::bladTerminu() {
    std::cerr << "Błąd terminu!" << std::endl;
}

void IModel::bladZapisu() {
    std::cerr << "Błąd zapisu!" << std::endl;
}

void IModel::bladDanych() {
    std::cerr << "Błąd danych!" << std::endl;
}

void IModel::zwrocPotwierdzenieZapisu() {
    std::cout << "Potwierdzenie zapisu dokumentu!" << std::endl;
}
