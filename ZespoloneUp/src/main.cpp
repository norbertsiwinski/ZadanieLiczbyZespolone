#include <iostream>
#include "BazaTestu.hh"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
#include "BazaTestu.hh"

using namespace std;





int main(int argc, char **argv)
{

  /* LZespolona L1=utworz(2,3);




    LZespolona L2=utworz(2,-4);

    LZespolona Wynik;
    Wynik=L1/L2;
    WyswietlZesp(Wynik); */

/*
WyrazenieZesp L3=tworzenie(L1,Op_Dodaj,L2);

Wyswietl(L3);

 / WyswietlZesp(L3);

    Wyswietl(L3); */

  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }



  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  LZespolona ODP;


  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {

    cout << "Oblicz wyrazenie:";
   Wyswietl(WyrZ_PytanieTestowe);
   cout <<endl;


 cout << "twoja odpowiedz:";
 cin >> ODP;
 WyswietlZesp(ODP);
cout <<endl;
   }




  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

}
