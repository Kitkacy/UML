#ifndef USER_H
#define USER_H
#include <string>

class User {
private:
	std::string name;
	std::string surname;
	int id;
	int phone;
	std::string email;

public:
	User(std::string name, std::string surname, int id, int phone, std::string email);
};

#endif
