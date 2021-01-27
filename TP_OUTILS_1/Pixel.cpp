#include "Pixel.h"
#include <iostream>


using namespace std;

Pixel::Pixel(){ r=0;g=0;b=0;  }
Pixel::Pixel(const unsigned int nr,const unsigned int ng,const unsigned int nb)
{
    r=nr;
    g=ng;
    b=nb;
}
int Pixel::getRouge() const {  return r;}
int Pixel::getVert() const  {  return g;}
int Pixel::getBleu() const  {  return b;}
void Pixel::setRouge(const unsigned int nr) { r=nr; }
void Pixel::setBleu(const unsigned int nb) { b=nb; }
void Pixel::setVert(const unsigned int ng) { g=ng; }