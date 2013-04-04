#include "Output.h"
#include <iostream>

COutput::COutput(void)
{
}


COutput::~COutput(void)
{
}

void COutput::printValidOrd()
{
    std::cout << std::endl << "Bestellung ist moeglich";
}

void COutput::printStorOrd(COrder* ord_)
{
    std::cout << std::endl << "Bestellung: " << ord_->getFilm() << " fuer " << ord_->getNmbrPers() << " Personen um " 
        << ord_->getTime() << " ist nicht moeglich.";
}

void COutput::printCustomOrd(COrder* emptyOrd_)
{
    std::cout << std::endl << std::endl << "Neue Ticketanfrage: ";
    std::cout << std::endl << "Film: " << emptyOrd_->getFilm() << " \tAnzahl Personen: " << emptyOrd_->getNmbrPers() << " \tUhrzeit: " << emptyOrd_->getTime();
}

void COutput::printRecOrd(COrder* ord_)
{
    std::cout << std::endl << "Ticket erhalten ";
    std::cout << std::endl << "Film: " << ord_->getFilm() << " \tAnzahl Personen: " << ord_->getNmbrPers() << " \tUhrzeit: " << ord_->getTime();
}