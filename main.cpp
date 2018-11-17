#include <iostream>

using namespace std;
int choco(int nofcopons,int bars){
//int bars=nofcopons/7;
//cout<<bars;
if(nofcopons>=7){
bars+=nofcopons/7;
return choco((nofcopons/7)+(nofcopons%7),bars);}
else{return bars;}
}

int main()
{   int ndollars;
 cout<<"enter money$$: ";
cin>>ndollars;
    cout<<"no of chocolates you can collect: ";
    cout <<choco(ndollars,ndollars) << endl;
    return 0;
}
