#ifndef INTERFACETERMINALADLAOBYWATELA_H
#define INTERFACETERMINALADLAOBYWATELA_H
#include "IView.h"

class InterfaceTerminalaDlaObywatela : public IView {


public:
	void wprowadzDanePetenta();

	void wyswietlPotwierdzenieWizyty();

	void wyswietlBladDanych();

	void wyswietlBrakTerminu();

	void wyborTerminu();

	void wyswietlFormularz();
	    
	void run(); 
};

#endif
