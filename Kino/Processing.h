#pragma once
#ifndef THEATRE_PROCESSING_H
#define THEATRE_PROCESSING_H

#include "Order.h"
#include "SFilm.h"

class CProcessing
{

public:
    static const int nmbrFilms = 3;
    static const int maxVis = 5;
    CProcessing(char* name1_, char* name2_, char* name3_);
    ~CProcessing(void);
    COrder* validOrd(COrder* ord_);

private:
    SFilm*  film[nmbrFilms];
};

#endif /* THEATRE_PROCESSING_H */
