#ifndef FASADA_H
#define FASADA_H

#pragma once

class Fasada
{
public:
    Fasada();
    ~Fasada();

    Spotkanie umowWizyte(Obywatel danePetenta, int preferowanaData, std::string celWizyty);
    Obywatel sprawdzDaneOsobowe(Obywatel danePetenta);
    void zwróćBłądDanych();
    void zwróćBłądDanych();
    void zwrocBladZapisu();
    void wyslijPotwierdzenieSpotkania();
    bool sprawdzDostepnoscTerminu(int preferowanaData);
    void createDokument(int typ, std::string nazwa, std::string plikDokumentu);
    void zwrocPotwierdzenieZapisu(); // New method declaration
    void zwrocBladDanych(); // New method declaration

private:

};

#endif