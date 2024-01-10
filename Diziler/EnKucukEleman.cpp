#include <iostream>
using namespace std;

int main(){
    float dizi[]={12.54, 8.7, 14.6, 4.6, 18.7, 6.5};
    int i, konum, elSayisi=6;
    float minimum;

    for(i=0; i<elSayisi; i++){
        cout<< "Dizinin "<< i+1 <<". elamani giriniz : ";
        cin>> dizi[i];
    }

    cout<<endl<<"Dizi : ";
    for(i=0; i<elSayisi; i++){
        cout<<dizi[i] << "  ";
    }
    minimum=dizi[0];
    konum=0;

    for(i=1; i<elSayisi; i++){
        if(minimum>dizi[i]){
            minimum= dizi[i];
            konum=i;
        }
    }

    cout<<endl<<"\n Dizinin en kucuk elemani "<< konum << ". indisindeki "<< dizi[konum] << " sayisidir. ";


    return 0;
}
