#include "LZespolona.hh"
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

LZespolona utworz(double re, double im)
{
    LZespolona utworzona;

    utworzona.re=re;
    utworzona.im=im;
    return utworzona;
}

LZespolona wczytaj()

/*void Wyswietl(LZespolona L1){
    cout<<"("<<L1.re<<"."<<L1.im<<"i"<<")";

} */
