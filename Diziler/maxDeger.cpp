#include <iostream>
using namespace std;

int main(){
    int sayilar[10];
    int i, enBuyuk, indis;
    int n=10;

    for(i=0; i<n; i++){
        cout<<"Dizinin "<< i+1 <<". elamani : ";
        cin>>sayilar[i];
    }

    cout<< "Dizi : ";
    for(i=0; i<n; i++){
        cout<< sayilar[i]<< " ";
    }

    enBuyuk=sayilar[0];
    indis=0;
    for(i=1; i<n; i++){
        if(enBuyuk<sayilar[i]){
            enBuyuk=sayilar[i];
            indis=i;
        }
    }

    cout<<endl<< "Yukaridaki dizide "<< indis << ". indisde ki en buyuk degerimiz "<< enBuyuk<<endl;

    return 0;
}
