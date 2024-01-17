#include <iostream>
using namespace std;

int cevreHesapla(int a){
    int cevre= 4*a;
    return cevre;
}

int cevreHesapla(int a, int b){
    int cevre = 2*a+2*b;
    return cevre;
}

int cevreHesapla(int a, int b, int c){
    int k=a+b+c;
    return k;
}

int main(){
    int c1= cevreHesapla(10);
    cout<< "Karenin cevre uzunlugu : "<<c1<<endl;

    int c2= cevreHesapla(10,15);
    cout<< "Dikdortgenin cevre uzunlugu : "<<c2<<endl;

    int c3= cevreHesapla(5,7,13);
    cout<< "Ucgenin cevre uzunlugu : "<<c3<<endl;

    return 0;
}
