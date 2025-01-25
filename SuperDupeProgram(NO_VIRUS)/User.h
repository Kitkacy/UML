#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User {

private:
	string name;
	string surname;
	int id;
	int phone;
	string email;

public:
	bool weryfikacjaDanychLogowania();
};

#endif
