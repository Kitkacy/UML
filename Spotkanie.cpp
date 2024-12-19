#include "Spotkanie.h"
#include "Obywatel.h"
#include "Urzednik.h"

Spotkanie::Spotkanie(int id, Obywatel petent, int czas, string cel, Urzednik urzednik)
	: id(id), petent(petent), czas(czas), cel(cel), urzednik(urzednik) {
	// TODO - implement Spotkanie::Spotkanie
	throw "Not yet implemented";
}

int Spotkanie::getDate() {
	// TODO - implement Spotkanie::getDate
	throw "Not yet implemented";
}

Obywatel Spotkanie::getPetent() {
	return this->petent;
}

string Spotkanie::getCel() {
	return this->cel;
}

Urzednik Spotkanie::getUrzednik() {
	return this->urzednik;
}

string Spotkanie::wygenerujINSERT() {
	// TODO - implement Spotkanie::wygenerujINSERT
	throw "Not yet implemented";
}
