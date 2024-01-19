#include <iostream>
using namespace std;

int main(){
    int dizi1[6], dizi2[6], dizi3[6];
    int i=0;
    for(i=0; i<6; i++){
        cout<< "1. Dizinin "<< i+1 <<". elamanini giriniz : ";
        cin>>dizi1[i];
    }
    cout<< "1. Dizi icin girilen Degerler : ";
    for(i=0; i<6; i++){
        if(i<5){
           cout<< dizi1[i] << " , ";
        }
        else{
            cout<< dizi1[i]<< endl<< endl;
        }

    }

    for(i=0; i<6; i++){
        cout<< "2. Dizinin "<< i+1 <<". elamanini giriniz : ";
        cin>>dizi2[i];
    }
    cout<< "2. Dizi icin girilen Degerler : ";
    for(i=0; i<6; i++){
        if(i<5){
           cout<< dizi2[i] << " , ";
        }
        else{
            cout<< dizi2[i]<< endl<< endl;
        }

    }

    for(i=0; i<6; i++){
        dizi3[i]=dizi1[i]+dizi2[i];
        cout<< "3. Dizinin "<< i+1 <<". elamanini : "<< dizi3[i]<<endl;
    }

    return 0;
}
