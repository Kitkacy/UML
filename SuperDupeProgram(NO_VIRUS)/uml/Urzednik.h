#ifndef URZEDNIK_H
#define URZEDNIK_H

#include "User.h"
#include "Dokument.h"

using namespace std;

class Urzednik : public User {
private:
    int dzial;
    int hierarchia;
    int startPracy;
    int koniecPracy;
    Dokument currentDokument;
public:
    // Dodano dodatkowe argumenty dla konstruktora User
    Urzednik(std::string name, std::string surname, int id, int phone, std::string email, 
             int dzial, int hierarchia, int startPracy, int koniecPracy, Dokument currentDokument);
    void setUpDokument(Dokument dokument);
    bool dodajDokumentDoBazyDanych();
};

#endif
