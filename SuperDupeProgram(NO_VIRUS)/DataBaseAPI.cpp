#include "DataBaseAPI.h"
#include <iostream>
#include "Spotkanie.h"
#include "Obywatel.h"
#include "Dokument.h"
#include "Fasada.h"


DataBaseAPI::DataBaseAPI()
{

}

DataBaseAPI::~DataBaseAPI()
{

}

bool DataBaseAPI::szukajWolnegoUrzędnika(int preferowanaData) {
    bool czyZnaleziono = false; /
    //placeholder API
    if (!czyZnaleziono) {
        Spotkanie TemSpot(preferowanaData);
        //placeholder
    }
    else{
        Fasada fasada;
        fasada.zwrocBladDanych();
    }
    return czyZnaleziono;
}

bool DataBaseAPI::podejmijProbeZapisu(Spotkanie spotkanie) {
    // Placeholder 
    std::cout << "Attempting to save the meeting with ID: " << spotkanie.getDate() << std::endl;
    bool success = true; 
    if (!success) {
        zaktualizujKalendarz(spotkanie);
    } else {
        Fasada fasada;
        fasada.zwrocBladZapisu();
    }
    return success;
}

bool DataBaseAPI::zapiszDokument(Dokument dokument) {
    bool success = false;
    while (!success) {
        // Placeholder 
        std::cout << "Attempting to save the document with ID: " << dokument.getId() << std::endl;
        success = true; 
        Fasada fasada;
        if (success) {
            fasada.zwrocPotwierdzenieZapisu();
        } else {
            fasada.zwrocBladDanych();

            if (userWantsToCancel) {
                 break;
            }
        }
    }
    return success;
}

void DataBaseAPI::zaktualizujKalendarz(Spotkanie spotkanie) {
    // Placeholder logic for updating the calendar
    std::cout << "Updating calendar for meeting with ID: " << spotkanie.getDate() << std::endl;
}