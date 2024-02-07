#include <iostream>
using namespace std;

class Cokgen{
public:
    int genislik;
    int yukseklik;
};

class Dikdortgen: public Cokgen{
public:
    string kose;

    Dikdortgen(int gGenislik, int gYukseklik, string gkose){
        genislik=gGenislik;
        yukseklik=gYukseklik;
        kose=gkose;
    }

    void bilgileriYaz(){
        cout<<"dikdortgenin Genisligi : "<<genislik<<endl;
        cout<<"dikdortgenin yuksekligi : "<<yukseklik<<endl;
        cout<<"dikdortgenin yapisi : "<<kose<<endl;
        //cout<<"-------------------------------------------"<<endl;
    }

    int alan(){
        cout<<"dikdirtgenin alani : "<<(genislik*yukseklik)<<endl;
        return (genislik*yukseklik);
    }

    int cevre(){
        cout<<"dikdirtgenin cevresi : "<<(2*genislik+2*yukseklik)<<endl;
        cout<<"-------------------------------------------"<<endl;
        return (2*genislik+2*yukseklik);
    }
};

class Ucgen: public Cokgen{
public:
    string yapi;

    void degerAta(int gGenislik, int gYukseklik, string gYapi){
        genislik=gGenislik;
        yukseklik=gYukseklik;
        yapi=gYapi;
    }

    void bilgileriYaz(){
        cout<<"ucgenin Genisligi : "<<genislik<<endl;
        cout<<"ucgenin yuksekligi : "<<yukseklik<<endl;
        cout<<"ucgenin yapisi : "<<yapi<<endl;
        //cout<<"-------------------------------------------"<<endl;
    }

    int alan(){
        cout<<"Ucgenin alani : "<<((genislik*yukseklik)/2)<<endl;
        //cout<<"-------------------------------------------"<<endl;
        return((genislik*yukseklik)/2);
    }

    int cevre(){
        cout<<"Ucgenin cevresi : "<<(3*genislik)<<endl;
        cout<<"-------------------------------------------"<<endl;
        return (3*genislik);
    }
};



int main(){
    Ucgen u1;
    u1.degerAta(15,10,"ucgen");
    u1.bilgileriYaz();
    int ucgenAlan=u1.alan();
    int ucgenCevre=u1.cevre();

    Ucgen u2;
    u2.degerAta(6,12,"eskenarucgen");
    u2.bilgileriYaz();
    u2.alan();
    u2.cevre();


    Dikdortgen d1(15,15,"Kare");
    d1.bilgileriYaz();

    int dikdortgenAlan=d1.alan();
    int dikdirtgenCevre=d1.cevre();

    Dikdortgen d2(5,20,"Dikdortgen");
    d2.bilgileriYaz();


    return 0;
}
