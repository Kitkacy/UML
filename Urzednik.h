#ifndef URZEDNIK_H
#define URZEDNIK_H
#include "User.h"
#include <list>
#include "IModel.h"
#include "Termin.h"

using namespace std;

class Urzednik : public User {

private:
	int dzial;
	int hierarchia;
	int startPracy;
	std::list<Termin> dostepneTerminy;

public:
	void getKalendarz();
};

#endif
