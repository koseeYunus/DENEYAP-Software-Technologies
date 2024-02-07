#include <iostream>
using namespace std;

class Daire{
public:
    int yariCap;

    float alanBul();
    float cevreBul();
};

float Daire::alanBul(){
    return 3.14*yariCap*yariCap;
}

float Daire::cevreBul(){
    return 2*3.14*yariCap;
}



int main(){
    Daire d;
    cout<< "Dairenin yaricapini giriniz : ";
    cin>> d.yariCap;

    cout<<"Dairenin Alani : "<<d.alanBul()<<endl;
    cout<<"Dairenin Cevresi : "<<d.cevreBul()<<endl;

    return main();
}
