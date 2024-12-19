#ifndef OBYWATEL_H
#define OBYWATEL_H
#include <string>
#include "User.h"
#include "IModel.h"
using namespace std;

class Obywatel : public User {

private:
	string krajZamieszkania;
	string adres;
	char plec;
	string PESEL;

public:
	Obywatel(string name, string surname, int id, int phone, string email, string krajZamieszkania, string adres);
};

#endif
