#include "Class2.h"
#include "Dokument.h"
#include "IBusiness.h"
#include "IModel.h"
#include "IView.h"
#include "InterfaceTerminalaDlaObywatela.h"
#include "InterfaceTerminalaDlaUrzednika.h"
#include "Obywatel.h"
#include "Petent2.h"
#include "Spotkanie.h"
#include "Status.h"
#include "SuwerenSpotkan.h"
#include "SuwerenWnioskow.h"
#include "Termin.h"
#include "Urzednik.h"
#include "User.h"
#include "Wniosek.h"
#include <iostream>
#include <string>


using std::string;

int main() {

int choice;
std::cout << "Wybierz opcję:\n";
std::cout << "1. Obywatel\n";
std::cout << "2. Urzędnik\n";
std::cout << "Twój wybór: ";
std::cin >> choice;

if (choice == 1) {
    InterfaceTerminalaDlaObywatela obywatelInterface;
    obywatelInterface.run();
} else if (choice == 2) {
    InterfaceTerminalaDlaUrzednika urzednikInterface;
    //urzednikInterface.run();
} else {
    std::cout << "Nieprawidłowy wybór.\n";
}
}