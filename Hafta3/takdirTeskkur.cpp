#include <iostream>
using namespace std;
int main(){
    int sayi=55;
    int toplam=0;
    int sayac=1;
    cout<<"Hosgeldiniz sifir degeri girmediginiz surece surekli sayi istenecektir"<<endl;

    while(sayi!=-1){
        if(sayi<=0 || sayi>=100){
            cout<<"ders notu sadece 0 ile 100 arasinda olmalidir"<<endl;
            sayi=55;
            sayac-=1;
        }
        else{
            cout<<sayac<<". ders not ortalamasi : ";
            cin>>sayi;
            toplam=toplam+sayi;
            sayac+=1;
        }
    }

    sayac=sayac-2;
    cout<<sayac<<" ders notu girdiniz."<<endl;
    cout<<"Girilen ders notlarinin ortalmasi : "<<toplam/sayac;


    return 0;
}

/*
int sayi=1000;
int toplam=0;
while(sayi>0){
        if(sayi%2==0){
            cout<< sayi<< endl;
           toplam=toplam+sayi;
        }

        sayi=sayi-1;

    }
    cout<< "0 ile 100 arasindaki cift olan sayilarin toplami "<<endl;
    cout<<toplam<<endl;*/
