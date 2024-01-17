#include <iostream>
using namespace std;

int cevreHesapla(int a){
    int cevre= 4*a;
    return cevre;
}


void ekranaYaz(string metin, int k){
    for(int i=1; i<=k; i++){
        cout<< metin <<endl;
    }
}

void ucgenAlanHesapla(int taban, int yukseklik){
    int alan= (taban*yukseklik)/2;
    cout<<"girilen degerlere gore uckenin alani : "<<alan<<endl;
}

int main(){
    int a,b;
    cout<< "ucgenin taban uzunlugu : ";
    cin>> a;
    cout<< "ucgenin yuksekligi : ";
    cin>> b;
    ucgenAlanHesapla(a,b);


    int adet;
    string met;

    cout<< "Lutfen metin giriniz : ";
    cin>> met;
    cout<< "kac kere yazilsin : ";
    cin>> adet;

    ekranaYaz(met, adet);

    ekranaYaz("Geldi",5);
    ekranaYaz("Gitti",2);

    int cevre1 = cevreHesapla(7);
    int cevre2 = cevreHesapla(9);
    cout<< cevre1 << endl;
    cout<< cevre2 << endl;

    int g1=0;
    int cevre3=0;
    cout<< "Karenin bir kenar uzunlugu : ";
    cin>>g1;
    cevre3= cevreHesapla(g1);
    cout<<"sonuc : "<< cevre3 <<endl;

    return 0;
}
