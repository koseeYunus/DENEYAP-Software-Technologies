#include <iostream>
#include <cstring>
using namespace std;

class CepTelefonu{
public:
    char marka[30];
    char islemci[25];
    int fiyat;
    int surum;
    int ekranBoyutu;
    bool aramaDurum;

    void arama();
    void bilgileriYaz();
    void resimCek();
};

void CepTelefonu::bilgileriYaz(){
    cout<<"Marka : "<<marka<<endl;
    cout<<"Islemci : "<<islemci<<endl;
    cout<<"Ekran Boyutu : "<<ekranBoyutu<<" inch"<<endl;
    cout<<"Fiyat : "<<fiyat<<endl;
    cout<<"Surum : "<<surum<<endl;
}
void CepTelefonu::arama(){
    aramaDurum=true;
    cout<<"Arama gerceklestiriliyor.."<<endl;
}

void CepTelefonu::resimCek(){
    cout<<"Resim cekildi."<<endl;
}

int main(){
    CepTelefonu ereninTelefonu;
    strcpy(ereninTelefonu.marka, "Lenovo");
    strcpy(ereninTelefonu.islemci, "Snapdragon");
    ereninTelefonu.fiyat=7800;
    ereninTelefonu.surum=10;
    ereninTelefonu.ekranBoyutu=12;
    ereninTelefonu.bilgileriYaz();
    ereninTelefonu.arama();

    cout<<"-----------------------------------"<<endl;

    CepTelefonu ayseninTelefonu;
    strcpy(ayseninTelefonu.marka, "Samsung");
    strcpy(ayseninTelefonu.islemci, "Intel");
    ayseninTelefonu.fiyat=9500;
    ayseninTelefonu.surum=11;
    ayseninTelefonu.ekranBoyutu=13;
    ayseninTelefonu.bilgileriYaz();
    ayseninTelefonu.resimCek();

    return 0;
}
