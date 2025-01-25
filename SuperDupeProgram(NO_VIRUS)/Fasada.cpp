#include "Fasada.h"
#include "Spotkanie.h"
#include "Obywatel.h" 
#include <iostream>
#include "DataBaseAPI.h"
#include "IModel.h"

Fasada::Fasada()
{

}

Fasada::~Fasada()
{

}

Spotkanie Fasada::umowWizyte(Obywatel danePetenta, int preferowanaData, std::string celWizyty)
{
    if (!danePetenta.sprawdzDaneOsobowe()) {
        zwróćBłądDanych();

        return Spotkanie(-1, danePetenta, preferowanaData, celWizyty, Urzednik());
    }
    if (!sprawdzDostepnoscTerminu(preferowanaData)) {
        zwrocBladZapisu();
        Spotkanie spotkanie(-1, danePetenta, preferowanaData, celWizyty, Urzednik());
        if (!spotkanie.zapiszSpotkanie()) {
            wyslijPotwierdzenieSpotkania();
        }
        return spotkanie;
    }
    return Spotkanie(0, danePetenta, preferowanaData, celWizyty, Urzednik());
}

bool Fasada::sprawdzDostepnoscTerminu(int preferowanaData) {
    DataBaseAPI db;
    if (!db.szukajWolnegoUrzędnika(preferowanaData)) {
        zwróćBłądDanych();
        return false;
    }
    return true;
}

Obywatel Fasada::sprawdzDaneOsobowe(Obywatel danePetenta) {
    // Placeholder 
    return danePetenta;
}

void Fasada::zwróćBłądDanych() {
    IModel model;
    model.bladTerminu();
}

void Fasada::zwrocBladZapisu() {
    IModel model;
    model.bladZapisu();
}

void Fasada::wyslijPotwierdzenieSpotkania() {
    // Placeholder 
    std::cout << "Potwierdzenie spotkania wysłane!" << std::endl;
}

void Fasada::createDokument(int typ, std::string nazwa, std::string plikDokumentu) {
    Urzednik urzednik;
    urzednik.utworzDokument(typ, nazwa, plikDokumentu);
}

void Fasada::zwrocPotwierdzenieZapisu() {
    IModel model;
    model.zwrocPotwierdzenieZapisu();
}

void Fasada::zwrocBladDanych() {
    IModel model;
    model.bladDanych();
}