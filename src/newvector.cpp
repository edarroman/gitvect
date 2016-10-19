#include "newvector.h"

newvector::newvector(int n)
{
    //ctor
    this->vect = new float[n];
    t = n;

}

newvector::~newvector()
{
    //dtor

}

//Get
float* newvector::getvect()
{
    return this->vect;
}

int newvector::getsize()
{
    return this-> t;
}

float newvector::getelem(int indic)
{
    return this-> vect[indic];
}


//Set
float newvector::modifiervect(int indic, float val)
{
    if ( indic < t){
         vect[indic] = val;}
}

float* newvector::somme2vect(newvector v2)
{
    if (t == v2.t)
    {
        for (int i=0; i <= t; i++){
            float smm = this->getelem(i) + v2.getelem(i);
            this->modifiervect(i, smm);
        }
    }
}

float* newvector::supp1elem(int indic)
{
    if (indic < t)
    {
        for(int i=indic; i < t; i++){
            this->modifiervect(i, getelem(i+1));
        }
        t = t-1;
    }
}

bool newvector::compare(newvector v2)
{
    bool etat = true;
    if (t == v2.t)
    {
        for (int i=0; i <= t; i++){
            if (this->getelem(i) != v2.getelem(i))
            {
                etat = false;
            }
        }
    }
    else
    {
    etat = false;
    }
    return etat;
}
