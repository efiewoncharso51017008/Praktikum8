#include <iostream.h>
#include <conio.h>
main(){
int n,i=1;
float nilai, rata, jml=0;
cout<<"Input Banyak Nilai = ";cin>>n;
do
{cout<<"Input Nialai "<<i<<"= ";cin>>nilai;
jml=jml+nilai;
rata=jml/n;
i++;}
while (i<=n);
cout<<"\nTotal nialai = "<<jml;
cout<<"\nRata nilai = "<<rata;
getch();}
