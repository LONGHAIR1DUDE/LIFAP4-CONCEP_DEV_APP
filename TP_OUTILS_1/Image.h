#ifndef __IMAGE_H__
#define __IMAGE_H__
#include <iostream>
#include "Pixel.h"


using namespace std;
class Image
{
        private : 
        Pixel* tab;
        int dimx,dimy;
        public : 
        Image ();
        Image (const int dimensionX,const int dimensionY);
        ~Image();
        Pixel getPix(const int x,const int y) const;
        void setPix(const int x,const int y,const Pixel couleur);
        void dessinerRectangle(const int Xmin,const int Ymin,const int Xmax,const int Ymax,const Pixel couleur);
        void effacer(const Pixel couleur);
        void testRegression();
};


#endif 