#include "Obywatel.h"
#include <string>
using namespace std;

Obywatel::Obywatel(string name, string surname, int id, int phone, string email, string krajZamieszkania, string adres) {
	// TODO - implement Obywatel::Obywatel
	throw "Not yet implemented";
}

bool Obywatel::sprawdzDaneOsobowe() {
    //placeholder
    if (poprawnoscCheck) {
        Fasada::zwrócBłądDanych();
        return 1;
    }
    return 0;
}
