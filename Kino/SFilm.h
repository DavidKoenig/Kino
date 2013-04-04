#ifndef THEATRE_SFILM_H
#define THEATRE_SFILM_H

struct SFilm 
{
    static const int    showings = 3;
    int                 time[showings];
    int                 visitors[showings];
    char*               name;
};

#endif /* THEATRE_SFILM_H */