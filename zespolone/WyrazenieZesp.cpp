#include <iostream>
#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */void Wyswietll(LZespolona L){
    cout<<"("<<L.re<<"."<<L.im<<"i"<<")";
 }


 void Wyswietl(WyrazenieZesp  WyrZ){

     cout<<"("<<WyrZ.Arg1<<"{"<<WyrZ.Op<<")"<<WyrZ.Arg2<<")";


 }






