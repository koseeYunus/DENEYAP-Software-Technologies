#include <iostream>
#include <cstring>
using namespace std;

class Araba{
public:
    char marka[30];
    int fiyat;
    int hiz;

    void hizlanma();
    void bilgileriYaz();
};

void Araba::hizlanma(){
    hiz=hiz+10;
    cout<<"Araba Hizlandi!"<<endl;
}

void Araba::bilgileriYaz(){
    cout<<"Arabanin markasi : "<<marka<<endl;
    cout<<"Arabanin fiyati : "<<fiyat<<endl;
}

int main(){
    Araba a1;
    strcpy(a1.marka,"AstonMartin");
    a1.fiyat=35000000;
    a1.hiz=50;
    a1.bilgileriYaz();
    a1.hizlanma();

    Araba a2;
    strcpy(a2.marka, "Ford");
    a2.fiyat=950000;
    a2.hiz=70;
    a2.bilgileriYaz();
    a2.hizlanma();

    return 0;
}

