#ifndef WNIOSEK_H
#define WNIOSEK_H
#include "IModel.h"
#include "Status.h"
#include "Obywatel.h"
#include "Urzednik.h"

class Wniosek {

private:
	int id;
	Status status;
	int termin;
	int idWzoru;
	int dataUtworzenia;
	int typ;
	Obywatel petent;
	Urzednik urzednik;

public:
	Wniosek(int id, Status status, int termin, int idWzoru, int dataUtworzenia, int typ, Obywatel petent, Urzednik urzednik);
};

#endif
