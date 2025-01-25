#ifndef IMODEL_H
#define IMODEL_H
#include "Obywatel.h"
#include "Urzednik.h"
#include "Wniosek.h"
#include "Spotkanie.h"
#include "Dokument.h"


class IModel {


public:
	Obywatel getObywatel(int id);

	Urzednik getUrzednik(int id);

	Wniosek getWniosek(int id);

	Spotkanie getSpotkanie(int id);

	Dokument getDokument(int id);

	bool addSpotkanie(Spotkanie spotkanie);

	bool addDokument(Dokument dokument);

	bool addWniosek(Wniosek wniosek);

	Spotkanie umowWizyte(Obywatel danePetenta, int preferowanaData, std::string celWizyty);

	void bladTerminu();
	void bladZapisu();
	void bladDanych();
	
	void dodajDokument(int typ, std::string nazwa, std::string plikDokumentu);
	void zwrocPotwierdzenieZapisu(); 
};

#endif
