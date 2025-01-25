#ifndef DATABASEAPI_H
#define DATABASEAPI_H

#pragma once

class DataBaseAPI
{
public:
    DataBaseAPI();
    ~DataBaseAPI();
    bool szukajWolnegoUrzędnika(int preferowanaData);
    bool podejmijProbeZapisu(Spotkanie spotkanie);
    void zaktualizujKalendarz(Spotkanie spotkanie);
    bool zapiszDokument(Dokument dokument); // New method declaration

private:
    bool userWantsToCancel;
};

#endif