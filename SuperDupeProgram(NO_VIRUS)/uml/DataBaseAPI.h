#ifndef DATABASEAPI_H
#define DATABASEAPI_H
#include "Dokument.h"

using namespace std;


class DataBaseAPI {
public:
    DataBaseAPI();
    bool zapiszDokument(Dokument dokument);
    void szukajWolnegoUrzednika();
    bool zapiszSpotkanie(Spotkanie spotkanie);
    void podejmijProbeZapisu();
    void zaktualizujKalendarz();
};

#endif
