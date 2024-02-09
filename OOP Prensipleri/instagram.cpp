#include <iostream>
using namespace std;

class Kullanici{
private:
    int id;
public:
    string kEposta;
    string kSifre;
    string kIsimSoyisim;
    string kAciklama;
    int kYas;
    int kGonderiAdedi;
    int kToplamBegeni;
    int kTakipciSayisi;

    void temelBilgileriYaz();
    void detayBilgileriYaz();

    void begeniAt();

    Kullanici(){
        cout<<"Nesne olusturuldu."<<endl;
    }
    ~Kullanici(){
        cout<<"Nesne yok edildi."<<endl;
    }
    Kullanici(string gkEposta, string gkSifre, string gkIsimSoyisim, string gkAciklama, int gkYas, int gkGonderiAdedi, int gkToplamBegeni, int gkTakipciSayisi);


};

Kullanici::Kullanici(string gkEposta, string gkSifre, string gkIsimSoyisim, string gkAciklama, int gkYas, int gkGonderiAdedi, int gkToplamBegeni, int gkTakipciSayisi){
    kEposta=gkEposta;
    kSifre=gkSifre;
    kIsimSoyisim=gkIsimSoyisim;
    kAciklama=gkAciklama;
    kYas=gkYas;
    kGonderiAdedi=gkGonderiAdedi;
    kToplamBegeni=gkToplamBegeni;
    kTakipciSayisi=gkTakipciSayisi;
}

void Kullanici::temelBilgileriYaz(){
    cout<<"E-posta : "<<kEposta<<endl;
    cout<<"Sifre : "<<kSifre<<endl;
    cout<<"------------------------------------"<<endl;
}

void Kullanici::detayBilgileriYaz(){
    cout<<"Isim soyisim : "<<kIsimSoyisim<<endl;
    cout<<"Yas: "<<kYas<<endl;
    cout<<"Aciklama : "<<kAciklama<<endl;
    cout<<"Gonderi adedi : "<<kGonderiAdedi<<endl;
    cout<<"Toplam begeni : "<<kToplamBegeni<<endl;
    cout<<"Takipci sayisi: "<<kTakipciSayisi<<endl;
    cout<<"------------------------------------"<<endl;
}

void Kullanici::begeniAt(){
    kToplamBegeni=kToplamBegeni+1;
    cout<<kIsimSoyisim<<" KISINE BEGENI YAPILDI"<<endl;
    cout<<"Toplam begeni : "<<kToplamBegeni<<endl;
    cout<<"------------------------------------"<<endl;

}

int main(){
    Kullanici tunahan345("asdf123@gmail.com","asdf123asd","Tuna Bayrak","merhaba dunya",17,22,250,432);
    tunahan345.temelBilgileriYaz();
    tunahan345.detayBilgileriYaz();
    tunahan345.begeniAt();

    Kullanici cancan45("cantuva54@hotmail.com","tuva323445.","Can Deniz","Hello World",15,27,550,772);
    cancan45.detayBilgileriYaz();
    cancan45.temelBilgileriYaz();

    return 0;
}
