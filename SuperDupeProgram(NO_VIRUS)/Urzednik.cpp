#include "Urzednik.h"
#include "Dokument.h"
#include "User.h"


Urzednik::Urzednik(std::string name, std::string surname, int id, int phone, std::string email, 
                   int dzial, int hierarchia, int startPracy, int koniecPracy, Dokument currentDokument)
    : User(name, surname, id, phone, email), 
      dzial(dzial),
      hierarchia(hierarchia),
      startPracy(startPracy),
      koniecPracy(koniecPracy),
      currentDokument(currentDokument) 
{
}

void Urzednik::setUpDokument(Dokument dokument) {
    this->currentDokument = dokument;
}

bool Urzednik::dodajDokumentDoBazyDanych() {
    return this->currentDokument.dodajDoBazyDanych();
}