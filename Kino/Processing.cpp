#include "Processing.h"
#include <iostream>
#include <string.h>

CProcessing::CProcessing(char* name1_, char* name2_, char* name3_)
{
    for(int movie = 0; movie < nmbrFilms; ++movie) this->film[movie] = new SFilm();
    this->film[0]->name = name1_;
    this->film[1]->name = name2_;
    this->film[2]->name = name3_;
    for(int movie = 0; movie < nmbrFilms; ++movie)
    {
        for(int time = 0; time < SFilm::showings; ++time)
        {
            this->film[movie]->time[time] = 1800 + time * 100;
            this->film[movie]->visitors[time] = this->maxVis;
            std::cout << std::endl << film[movie]->name << " " << film[movie]->time[time] << " " << film[movie]->visitors[time];
        }
    }
}


CProcessing::~CProcessing(void)
{
    for(int movie = 0; movie < nmbrFilms; ++movie)
    {
        delete this->film[movie];
    }
}

COrder* CProcessing::validOrd(COrder* ord_)
{
    for(int movie = 0; movie < nmbrFilms; ++movie)
    {
        if(this->film[movie]->name == ord_->getFilm())
        {
            for(int time = 0; time < SFilm::showings; ++time)
            {
                if(this->film[movie]->time[time] == ord_->getTime())
                {
                    if((this->film[movie]->visitors[time] - ord_->getNmbrPers()) >= 0) 
                    {
                        this->film[movie]->visitors[time] -= ord_->getNmbrPers();
                        ord_->setValid(true);
                        return ord_;
                    }
                }
            }
        }
    }
    ord_->setValid(false);
    return ord_;
}