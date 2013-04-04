#pragma once
#ifndef THEATRE_OUTPUT_H
#define THEATRE_OUTPUT_H

#include "Order.h"

class COutput
{
public:
    COutput(void);
    ~COutput(void);
    void printValidOrd();
    void printStorOrd(COrder* ord_);
    void printCustomOrd(COrder* emptyOrd_);
    void printRecOrd(COrder* ord_);
};

#endif /* THEATRE_OUTPUT_H */