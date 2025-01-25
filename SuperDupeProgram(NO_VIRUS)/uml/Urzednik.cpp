#include "Urzednik.h"
#include "Dokument.h"
#include "User.h"

// Poprawiona wersja konstruktora z przekazywaniem wartości do User
Urzednik::Urzednik(std::string name, std::string surname, int id, int phone, std::string email, 
                   int dzial, int hierarchia, int startPracy, int koniecPracy, Dokument currentDokument)
    : User(name, surname, id, phone, email), // Wywołanie konstruktora klasy bazowej
      dzial(dzial),
      hierarchia(hierarchia),
      startPracy(startPracy),
      koniecPracy(koniecPracy),
      currentDokument(currentDokument) 
{
}
