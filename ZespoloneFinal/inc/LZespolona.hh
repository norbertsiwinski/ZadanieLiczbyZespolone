#include <iostream>
#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
using namespace std;

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};




LZespolona utworz(double re, double im);

/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */
LZespolona sprzezenie(LZespolona L);
double modul(LZespolona L);
LZespolona dziel(LZespolona Skl1,double x);
LZespolona operator - (LZespolona Skl1, LZespolona Skl2);
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator * (LZespolona Skl1, LZespolona Skl2);
LZespolona operator / (LZespolona Skl1, LZespolona Skl2);
std::istream & operator >>(std::istream & strm, LZespolona & Skl);
std::ostream & operator <<(std::ostream & strm, LZespolona L);
bool operator ==(LZespolona Skl1, LZespolona Skl2);
bool operator !=(LZespolona Skl1, LZespolona Skl2);


#endif
