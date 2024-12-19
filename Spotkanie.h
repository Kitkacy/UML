#ifndef SPOTKANIE_H
#define SPOTKANIE_H
#include <string>

using std::string;

class Spotkanie {

private:
	int id;
	Obywatel petent;
	int dateTime;
	std::string cel;
	Urzednik urzednik;
	int czas;

public:
	Spotkanie(int id, Obywatel petent, int czas, string cel, Urzednik urzednik);

	int getDate();

	Obywatel getPetent();

	std::string getCel();

	Urzednik getUrzednik();

	std::string wygenerujINSERT();
};

#endif
