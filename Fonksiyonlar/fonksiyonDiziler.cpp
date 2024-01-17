#include <iostream>
using namespace std;

int diziBuyuk(int d1[5]){
    int enbuyuk= d1[0];
    for(int i=1; i<5; i++){
        if(enbuyuk<d1[i]){
            enbuyuk = d1[i];
        }
    }
    return enbuyuk;

}

int main(){
    int dizi[5]= {1,2,0,5,7};
    int b1= diziBuyuk(dizi);
    cout<< "1. Dizideki en buyuk deger : "<< b1 << endl;

    int dizi2[5] = {9,25,12,67,1};
    int b2= diziBuyuk(dizi2);
    cout<< "2. Dizideki en buyuk deger : "<< b2 << endl;

    int dizi3[5] = {12,45,65,1,5};
    int b3= diziBuyuk(dizi3);
    cout<< "3. Dizideki en buyuk deger : "<< b3 << endl;

    cout<< "Dizideki iki en buyuk degerin toplami : "<< b1+b2+b3 << endl;

    return 0;
}
