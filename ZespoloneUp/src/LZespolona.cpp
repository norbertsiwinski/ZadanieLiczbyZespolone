#include "LZespolona.hh"
#include <iostream>
#include <math.h>


using namespace std;


/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}
LZespolona operator - (LZespolona Skl1, LZespolona Skl2)
{
    LZespolona Wynik;
    Wynik.re=Skl1.re - Skl2.re;
    Wynik.im=Skl1.im - Skl2.im;
     return Wynik;
}

LZespolona operator * (LZespolona Skl1, LZespolona Skl2){
 LZespolona Wynik;
 Wynik.re=Skl1.re*Skl2.re - Skl1.im*Skl2.im;
 Wynik.im=Skl1.re*Skl2.im + Skl1.im*Skl2.re;
 return Wynik;

}
LZespolona operator / (LZespolona Skl1, LZespolona Skl2){

LZespolona Wynik;

LZespolona LSprz1=sprzezenie(Skl2);
double ModzLiczb=modul(Skl2);
ModzLiczb=pow(ModzLiczb,2);
LZespolona x=Skl1*LSprz1;
Wynik=dziel(x,ModzLiczb);
return Wynik;

}
LZespolona sprzezenie(LZespolona L){

L.im=-L.im;
return L;
}

double modul(LZespolona L)
{
    double LM;
    LM=sqrt(pow(L.re,2)+pow(L.im,2));
    return LM;
}

LZespolona dziel(LZespolona Skl1,double x){

LZespolona Wynik;
Wynik.im=Skl1.im/x;
Wynik.re=Skl1.re/x;
return Wynik;
}



LZespolona utworz(double re, double im)
{
    LZespolona utworzona;

    utworzona.re=re;
    utworzona.im=im;
    return utworzona;
}

bool Wczytaj(std::istream & strm, LZespolona & Skl)
{
  char znak;
  strm>>znak;
  if (znak != '(') return false;
  strm>>Skl.re>>Skl.im>>znak;
  if (znak != 'i') return false;
  strm>>znak;
  if (znak != ')') return false;
  return true;
}


std::istream & operator >>(std::istream & strm, LZespolona & Skl){

  char znak;
  strm>>znak;
  if (znak != '(')
    strm.setstate(std::ios::failbit);
  strm>>Skl.re>>Skl.im>>znak;
  if (znak != 'i')
    strm.setstate(std::ios::failbit);
  strm>>znak;
  if (znak != ')')
    strm.setstate(std::ios::failbit);
}


/*void Wyswietl(LZespolona L1){
    cout<<"("<<L1.re<<"."<<L1.im<<"i"<<")";

} */
