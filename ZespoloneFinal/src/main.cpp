#include <iostream>
#include "BazaTestu.hh"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
#include "BazaTestu.hh"
#include "Statystyki.hh"


using namespace std;





int main(int argc, char **argv)
{

int i;
Statystyki Stat;
inicjuj(Stat);

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

WyrazenieZesp WyrZ_PytanieTestowe;
LZespolona ODP;
LZespolona Wynik;




  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {

  cout << "Oblicz wyrazenie:";
cout << WyrZ_PytanieTestowe<<endl;
cout << "Twoja odpowiedz:";


for(i=0;i<3;i++){


cin >> ODP;
Wynik=Oblicz(WyrZ_PytanieTestowe);

if (!cin.good() ) {

if(i<2){
cout << "Blad formatu liczby zespolonej,sprobuj ponownie." <<endl;
cout << "Twoja odpowiedz:";
}
cin.clear( );
cin.ignore(10000,'\n');
dodaj_zla(Stat);

}

else{

if(ODP==Wynik){
dodaj_popr(Stat);
cout << "Odpowiedz poprawna." <<endl;

break;

}
else if(ODP!=Wynik){
dodaj_zla(Stat);
cout << "Odpowiedz niepoprawna." <<endl;

break;

}
}
 }

}
cout<<"Koniec testu."<<endl;
cout<<"PODSUMOWANIE"<<endl;

cout << Stat;
cout<<endl;

}
