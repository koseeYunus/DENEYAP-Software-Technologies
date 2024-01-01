#include <iostream>
using namespace std;

int main(){
    cout<<"ilk projem ";
    cout<<"nasilsin"<<endl;

    cout<<"----------------------"<<endl;

    int sayi1=25;
    int sayi2=5;

    int toplam;
    int carpim;
    int cikarma;
    int bolum;
    toplam=sayi1+sayi2;
    carpim=sayi1*sayi2;
    cikarma=sayi1-sayi2;
    bolum=sayi1/sayi2;

    cout<<sayi1<<"+"<<sayi2<<"="<<toplam<<endl;
    cout<<sayi1<<"x"<<sayi2<<"="<<carpim<<endl;
    cout<<sayi1<<"-"<<sayi2<<"="<<cikarma<<endl;
    cout<<sayi1<<"/"<<sayi2<<"="<<bolum<<endl;

    cout<<"----------------------------------"<<endl;

    int s1, s2;
    cout<<"1. sayiyi giriniz : ";
    cin>>s1;
    cout<<"2. sayiyi giriniz : ";
    cin>>s2;

    cout<<s1<<"+"<<s2<<"="<<s1+s2<<endl;
    cout<<s1<<"x"<<s2<<"="<<s1*s2<<endl;
    cout<<s1<<"-"<<s2<<"="<<s1-s2<<endl;
    cout<<s1<<"/"<<s2<<"="<<s1/s2<<endl;

    return 0;
}
