#include <iostream>
using namespace std;

class Araba{
private:
    int id;
public:
    string marka;
    string model;
    int yil;
    int fiyat;
    string motorGucu;
    bool arabaDurum;

    void verileriGoster();
    void kontakCevir();

    Araba(string gMarka, string gModel, int gYil, int gFiyat, string gMotorGucu);
    Araba(){
        cout<<"Nesne Olusturuldu"<<endl;
    }
    ~Araba(){
        cout<<"Nesne yok edildi"<<endl;
    }

};

Araba::Araba(string gMarka, string gModel, int gYil, int gFiyat, string gMotorGucu){
    marka=gMarka;
    model=gModel;
    yil=gYil;
    fiyat=gFiyat;
    motorGucu=gMotorGucu;
}

void Araba::kontakCevir(){
    arabaDurum=true;
    cout<<"Araba calistirildi"<<endl;
}

void Araba::verileriGoster(){
    cout<<"Marka : "<<marka<<endl;
    cout<<"Model : "<<model<<endl;
    cout<<"Yil : "<<yil<<endl;
    cout<<"Fiyat : "<<fiyat<<endl;
    cout<<"Motor Gucu : "<<motorGucu<<endl;
    cout<<"-------------------------------"<<endl;
}

int main(){
    Araba a3("Renault","Congo",2012,270000,"1.6 tdi");
    a3.verileriGoster();
    a3.kontakCevir();

    Araba a1;
    a1.marka="toyota";
    a1.model="corolla";
    a1.yil=2008;
    a1.fiyat=250000;
    a1.verileriGoster();

    Araba a2;
    a2.marka="Mercedes";
    a2.model="Benz";
    a2.yil=2001;
    a2.fiyat=280000;
    a2.verileriGoster();





    return 0;
}
