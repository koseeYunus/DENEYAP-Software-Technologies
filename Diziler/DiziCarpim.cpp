#include <iostream>
using namespace std;

int main(){
    int dizi1[4];
    int dizi2[4];
    int dizi3[4];
    int i;

    for(i=0; i<4; i++){
        cout<< "1. Dizinin "<< i+1 <<". elamani giriniz : ";
        cin>> dizi1[i];
    }

    for(i=0; i<4; i++){
        cout<< dizi1[i]<<"\t";
    }

    cout<<endl<< "-------------------------------------------- "<<endl;
    for(i=0; i<4; i++){
        cout<< "2. Dizinin "<< i+1 <<". elamani giriniz : ";
        cin>> dizi2[i];
    }

    for(i=0; i<4; i++){
        cout<< dizi2[i]<<"\t";
    }

    cout<< endl<<"-------------------------------------------- "<<endl;
    for(i=0; i<4; i++){
        dizi3[i]= (((dizi1[i]+dizi2[i])*5)%10);
        cout<< "3. Dizinin carpim isleminden sonraki "<< i+1 <<". elamani : "<<dizi3[i]<<endl;
    }



    return 0;
}
