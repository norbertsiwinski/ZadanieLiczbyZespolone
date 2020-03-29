using namespace std;
#include "Statystyki.hh"


 void inicjuj(Statystyki &st){

   st.dobre=0;
   st.wszystkie=0;

}

void wyswietl(Statystyki &st){
cout<<st.dobre;
cout<<st.wszystkie;


}
int ile_dobrych(Statystyki &st){

st.dobre++;
return st.dobre;
}

void dodaj_popr(Statystyki &st){

ile_dobrych(st);
 ile_wszystkich(st);

}
void dodaj_zla(Statystyki &st){
ile_wszystkich(st);

}

int ile_wszystkich(Statystyki &st){
 st.wszystkie=st.wszystkie+1;
 return st.wszystkie;
}

float procent_dobrych(Statystyki &st){

return ((float)st.dobre/(float)st.wszystkie)*100;

}
void wyswietl_s(Statystyki &st)
{
    cout << procent_dobrych(st);
}

ostream & operator <<(ostream &strm, Statystyki &st){

strm<<"Liczba pytan:"<< st.wszystkie<<endl;
strm<<"Liczba poprawnych odp:"<< st.dobre<<endl;
strm<<"Liczba blednych odp:"<<st.wszystkie - st.dobre<<endl;
strm<<"Procent dobrych odp:"<<procent_dobrych(st);


 return strm;
}

