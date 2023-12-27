#include <iostream>
using namespace std;

int main(){
    int sicaklik;
    cout<< "Suyun sicakligini giriniz :";
    cin>> sicaklik;

    if(sicaklik<0){
        cout<< "Su Kati Haldedir";
    }
    else if(sicaklik<100){
        cout<< "Su Sivi Haldedir";
    }
    else if(sicaklik<1000){
        cout<< "Su Gaz Halindedir";
    }
    else{
        cout<<"Su Plazma Halindedir";
    }

    return 0;
}
