#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Urun{
public:
    char marka[30];
    int agirlik;
    int fiyat;
};

class Peynir:public Urun{
    public:
    Peynir(){
        strcpy(marka,"Sutas");
        agirlik=450;
        fiyat=75;

    }
    int hesapla(int adet){
        return adet*fiyat;
    }
};

class Sucuk:public Urun{
    public:
    Sucuk(){
        strcpy(marka,"Sahin");
        agirlik=650;
        fiyat=95;
    }
    int hesapla(int adet){
        return adet*fiyat;
    }
};

class Yumurta:public Urun{
    public:
    Yumurta(){
        strcpy(marka,"tavukgiller");
        agirlik=1150;
        fiyat=110;
    }
    int hesapla(int adet){
        return adet*fiyat;
    }
};


int main(){
    int toplam=0;
    ofstream dosya;
    dosya.open("Fis.txt");

    Peynir p;
    Sucuk s;
    Yumurta y;

    toplam=p.hesapla(1)+s.hesapla(2)+y.hesapla(5);
    dosya<<toplam<<endl;
    dosya.close();

    return 0;
}
