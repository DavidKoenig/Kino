#include "Customer.h"


CCustomer::CCustomer(char* film_, int nmbrPers_, int time_)
    : film(film_)
    , nmbrPers(nmbrPers_)
    , time(time_)
{
}


CCustomer::~CCustomer(void)
{
}

COrder* CCustomer::placeOrd(COrder* emptyOrd_, COutput* output_)
{
    emptyOrd_->setCustomOrd(this->nmbrPers, this->time, this->film);
    output_->printCustomOrd(emptyOrd_);
    return emptyOrd_;
}

void CCustomer::getOrd(COrder* ord_, COutput* output_)
{
    if(ord_->getValid()) output_->printRecOrd(ord_);
}
