#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
    int toplam=0;
    string satir;
    int a=0;

    ifstream dosya("snv.txt");

    if(dosya.is_open()){
        cout<< "Sayilar :"<<endl;

        while(getline(dosya, satir)){
            toplam=toplam+atoi(satir.c_str());
            a=a+1;
            cout<<satir<<endl;
        }
        cout<<"Sinav notlarinin ortalmasi :"<<(toplam/a)<<endl;

    }
    else{
        cout<<"HATA";
    }

    return 0;
}
