#include "TicketCounter.h"


CTicketCounter::CTicketCounter(void)
{
}


CTicketCounter::~CTicketCounter(void)
{
}

COrder* CTicketCounter::receiveOrd(COrder* ord_, COutput* output_)
{
    if(ord_->getValid()) retValOrd(output_);
    else storOrd(ord_, output_);
    return ord_;
}

void CTicketCounter::retValOrd(COutput* output_)
{
    output_->printValidOrd();
}

void CTicketCounter::storOrd(COrder* ord_, COutput* output_)
{
    output_->printStorOrd(ord_);
}