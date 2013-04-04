#pragma once
#ifndef THEATRE_TICKET_COUNTER_H
#define THEATRE_TICKET_COUNTER_H

#include "Order.h"
#include "Output.h"

class CTicketCounter
{
public:
    CTicketCounter(void);
    ~CTicketCounter(void);
    COrder* receiveOrd(COrder* ord_, COutput* output_);
    void retValOrd(COutput* output_);
    void storOrd(COrder* ord_, COutput* output_);
};

#endif /* THEATRE_TICKET_COUNTER_H */