#ifndef __PIXEL_H__
#define __PIXEL_H__
#include <iostream>
using namespace std;
class Pixel
{
        private : unsigned int r,g,b;
        public : 
        Pixel();
        Pixel(const unsigned int nr,const unsigned int ng,const unsigned int nb);
        int getRouge() const;
        int getVert() const;
        int getBleu() const;
        void setRouge(const unsigned int nr);
        void setVert(const unsigned int ng);
        void setBleu(const unsigned int nb);
};

#endif 