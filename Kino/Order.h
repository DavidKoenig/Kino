#pragma once
#ifndef THEATRE_ORDER_H
#define THEATRE_ORDER_H

class COrder
{
public:
    COrder(void);
    ~COrder(void);
    int getNmbrPers();
    int getTime();
    char* getFilm();
    bool getValid();
    void setValid(bool valid_);
    void setCustomOrd(int nmbrPers_, int time_, char* film_);

private:
    int     nmbrPers;
    int     time;
    char*   film;
    bool    valid;
};

#endif /* THEATRE_ORDER_H */