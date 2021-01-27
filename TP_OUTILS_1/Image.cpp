#include <iostream>
#include <assert.h>
#include "Image.h"

using namespace std;

Image::Image(){ dimx = 0; dimy = 0;}
Image::Image(const int dimensionX,const int dimensionY)
{   assert((dimensionX>0)&&(dimensionY>0));
    this->tab = new Pixel [dimensionX*dimensionY];
}
Image::~Image(){ delete[] tab; tab = NULL; dimx = 0;dimy=0;}
Pixel Image::getPix(const int x,const int y) const
{
    assert((x>=0)&&(y>=0));
    
}