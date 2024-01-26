#include <iostream>
using namespace std;

string hangisiBuyuk(int a, int b){
    if(a>b){
        return "1. sayi 2. sayidan buyuktur.";
    }
    else if(a<b){
        return "2. sayi 1. sayidan buyuktur.";
    }
    else{
        return "Iki sayi birbirine esittir.";
    }
}

void enBuyuk(int enb[5]){
    int buyukOlan= enb[0];
    for(int i=1; i<5; i++){
        if(buyukOlan<enb[i]){
            buyukOlan=enb[i];
        }
    }
    cout<<"Dizideki en buyuk sayi : "<< buyukOlan <<endl;

}

int main(){
    int sayilar[]={6, 10, 24, 8, 12};
    enBuyuk(sayilar);

    int sayi1, sayi2;
    string sonuc;

    cout<<"1. Sayi : ";
    cin>>sayi1;
    cout<<"2. Sayi : ";
    cin>>sayi2;
    sonuc = hangisiBuyuk(sayi1, sayi2);

    cout<<sonuc<<endl;

    return main();
}
