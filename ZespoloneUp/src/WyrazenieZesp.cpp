#include <iostream>
#include "WyrazenieZesp.hh"



/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */void WyswietlZesp(LZespolona L){
    cout<<"("<<L.re<<std::showpos<<L.im<<std::noshowpos<<"i)";
 }



 void Wyswietl(WyrazenieZesp  WyrZ){

     WyswietlZesp(WyrZ.Arg1);


     switch(WyrZ.Op){
 case Op_Dodaj:
    cout<<"+";
break;
 case Op_Odejmij:
     cout<<"-";
     break;
 case Op_Mnoz:
    cout<<"*";
    break;
 case Op_Dziel:
    cout<<"/";
break;
     }
WyswietlZesp(WyrZ.Arg2);


 }


/*
WyrazenieZesp tworzenie(LZespolona L1, Operator O, LZespolona L2){

WyrazenieZesp zrob;

zrob.Arg1=L1;
zrob.Op=O;
zrob.Arg2=L2;

return zrob;
}
*/











