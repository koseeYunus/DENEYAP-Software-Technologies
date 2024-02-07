#include <iostream>
using namespace std;

class Kare{
private:
    float kenar;
public:
    float alan;
    void degerAtama(float);
    float cevreHesapla();


};

void Kare::degerAtama(float k){
    kenar=k;
}

float Kare::cevreHesapla(){
    cout<< "Karenin Cevresi : "<< 4*kenar <<endl;
    return 4*kenar;
}

int main(){
    Kare k1;
    Kare k2;
    Kare k3;

    k1.degerAtama(5.2);
    k2.degerAtama(7.4);
    k3.degerAtama(12);

    k1.cevreHesapla();
    k2.cevreHesapla();
    k3.cevreHesapla();


    //cout<< "k1 karesinin Cevresi : "<< k1.cevreHesapla()<<endl;



    return 0;
}
