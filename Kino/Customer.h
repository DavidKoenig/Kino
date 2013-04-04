#pragma once
#ifndef THEATRE_CUSTOMER_H
#define THEATRE_CUSTOMER_H

#include "Order.h"
#include "Output.h"

class CCustomer
{
public:
    CCustomer(char* film_, int nmbrPers_, int time_);
    ~CCustomer(void);
    COrder* placeOrd(COrder* emptyOrd_, COutput* output_);
    void getOrd(COrder* ord_, COutput* output_);

private:
    char*   film;
    int     nmbrPers;
    int     time;
};

#endif /* THEATRE_CUSTOMER_H */