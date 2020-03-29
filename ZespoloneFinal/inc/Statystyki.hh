using namespace std;
#include<iostream>


struct Statystyki{
    int dobre;
    int wszystkie;
};

void inicjuj(Statystyki &st);
void wyswietl(Statystyki &st);
void dodaj_popr(Statystyki &st);
void dodaj_zla(Statystyki &st);
int ile_wszystkich(Statystyki &st);
int ile_dobrych(Statystyki &st);
float procent_dobrych(Statystyki &st);

ostream & operator <<(ostream &strm,  Statystyki &st);
