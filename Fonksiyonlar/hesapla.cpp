#include <iostream>
using namespace std;

int ucgenAlanHesapla(int taban, int yukseklik){
    int hesap= (taban*yukseklik)/2;
    //cout<< "Ucgenin alani : "<< hesap << endl;
    return hesap;
}
int toplamAlanHesapla(int uckenAdet){
    int t, y;
    int alan, toplamAlan=0;

    for(int i=0; i<uckenAdet; i++){
        cout<< i+1 <<". Ucgenin taban uzunlugu : ";
        cin>>t;
        cout<< i+1 <<". Ucgenin yuksekligi : ";
        cin>>y;
        alan = ucgenAlanHesapla(t,y);
        cout<< i+1 <<". Ucgenin alani : "<< alan << endl;
        toplamAlan = toplamAlan + alan;
    }
    return toplamAlan;
}
int main(){
    int kacUcken, geriGelen;

    cout<< "Kac tane ucgenin alani hesaplayacaksiniz : ";
    cin>>kacUcken;
    geriGelen = toplamAlanHesapla(kacUcken);
    cout<< "Girilen degerlere gore toplam alan : "<< geriGelen <<endl;

    return main();
}
