#include "Dokument.h"
#include <string>
#include "Urzednik.h"
#include "DataBaseAPI.h"

Dokument::Dokument(int id, std::string nazwa, int typ, int data, std::string lokalizacja) {

}

void Dokument::stworzPlikDokumentu(std::string lokalizacja) {

}
bool Dokument::weryfikujPoprawnosc() {

}
bool Dokument::nadajID() {
    if (weryfikujPoprawnosc()) {
        Fasada::zwrocBladDanych();
        return false;
    }
    this->id = 123; 
    Urzednik urzednik; 
    urzednik.setUpDokument(*this);
    return urzednik.dodajDokumentDoBazyDanych();
}
bool Dokument::dodajDoBazyDanych() {
    DataBaseAPI db;
    bool success = false;
    while (!success) {
        success = db.zapiszDokument(*this);
        if (!success) {
            //Placeholder
        }
    }
    return success;
}