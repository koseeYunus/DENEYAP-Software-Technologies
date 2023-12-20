#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Birinci sayiyi giriniz : ";
    cin>>x;
    cout<<"ikinci sayiyi giriniz : ";
    cin>>y;

    int toplam, carpim, bolum, cikarim, modd;

    toplam= x+y;
    carpim= x*y;
    bolum= x/y;
    cikarim= x-y;
    modd= x%y;

    cout<<"toplam degeri : "<< toplam<<endl;
    cout<<" carpim degeri : " << carpim <<endl;
    cout<<"bolum degeri : "<< bolum<<endl;
    cout<<" cikarim degeri : " << cikarim <<endl;
    cout<<" mod degeri : " << modd <<endl;

    return 0;



}
