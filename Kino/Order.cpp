#include "Order.h"


COrder::COrder(void)
    : nmbrPers(0)
    , time(0)
    , film("")
    , valid(false)
{
}


COrder::~COrder(void)
{
}

int COrder::getNmbrPers() 
{
    return this->nmbrPers;
}

int COrder::getTime() 
{
    return this->time;
}

char* COrder::getFilm()
{
    return this->film;
}

bool COrder::getValid()
{
    return this->valid;
}

void COrder::setValid(bool valid_)
{
    this->valid = valid_;
}

void COrder::setCustomOrd(int nmbrPers_, int time_, char* film_)
{
    this->nmbrPers = nmbrPers_;
    this->time = time_;
    this->film = film_;
}
