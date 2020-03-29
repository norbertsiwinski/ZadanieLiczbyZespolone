#include "WyrazenieZesp.hh"
using namespace std;


std::istream & operator >> (std::istream &strm,WyrazenieZesp WZ) {
  strm >> WZ.Arg1 >> WZ.Op >> WZ.Arg2;
  return strm;
}

std::istream &operator >>(std::istream &strm, Operator &Op){

char znak;
  strm >> znak;
  switch(znak) {
  case '+':
      Op=Op_Dodaj;
      break;

      case '-':
     Op=Op_Odejmij;
     break;

 case '*':
     Op=Op_Mnoz;
    break;

 case '/':
         Op=Op_Dziel;
break;

 default:
    {
        cerr<<"Podano nieprawidlowy operator"<<endl;
    }
    break;
}

return strm;
}



std::ostream & operator <<(std::ostream & strm, WyrazenieZesp Wyr){

strm<<Wyr.Arg1<<Wyr.Op<<Wyr.Arg2;

return strm;


}


std::ostream & operator <<(std::ostream & strm,Operator Oper)
{
    switch (Oper)
    {
    case Op_Dodaj:
    {
        strm<<'+';
        break;
    }
    case Op_Odejmij:
    {
        strm<<'-';
        break;
    }
    case Op_Mnoz:
    {
        strm<<'*';
        break;
    }
    case Op_Dziel:
    {
        strm<<'/';
        break;
    }
    default:
        break;
    }
    return strm;
}

LZespolona Oblicz(WyrazenieZesp  WyrZ)
{
    LZespolona Wynik;
switch (WyrZ.Op)
{
case Op_Dodaj:
{
 Wynik=WyrZ.Arg1+WyrZ.Arg2;

    break;
}
case Op_Odejmij:
{
   Wynik=WyrZ.Arg1-WyrZ.Arg2;

    break;
}
case Op_Dziel:
{
    Wynik=WyrZ.Arg1/WyrZ.Arg2;

    break;
}
case Op_Mnoz:
{
    Wynik=WyrZ.Arg1*WyrZ.Arg2;

    break;
}
}
return Wynik;


}







