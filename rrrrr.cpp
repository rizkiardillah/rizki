#include <iostream>
using namespace ::std;

int mod (int bilangan,int modul) {
return bilangan%modul;
}

main (){

int bilangan,modul;
char v;
do{
cout<<"bilangan awal     :";cin>>bilangan;
cout<<"bilangan modulus  :";cin>>modul;
cout<<bilangan<<"modulus  "<<modul<<"="<<mod(bilangan,modul);
cout<<"\n\n";
cout<<"ulangi (ya/tdk) :";cin>>v;}
while (v=='y');}









