mainTest: mainTest.o Pixel.o Image.o
	g++ mainTest.o Pixel.o Image.o -o mainTest
mainTest.o : mainTest.cpp Pixel.cpp Image.cpp
	g++ -Wall -c mainTest.cpp
Pixel.o : Pixel.cpp Pixel.h
	g++ -Wall -c Pixel.cpp
Image.o : Image.cpp Image.h
	g++ -Wall -c Image.cpp	 
