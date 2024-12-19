#ifndef SUWERENWNIOSKOW_H
#define SUWERENWNIOSKOW_H
#include "Wniosek.h"

class SuwerenWnioskow {

private:
	Wniosek obecnyWniosek;

public:
	void checkValidity();

	void addNewToDB();

	void removeFromDB();

	void updateToDB();
};

#endif
