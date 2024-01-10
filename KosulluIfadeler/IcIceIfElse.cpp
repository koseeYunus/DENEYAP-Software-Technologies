#include <iostream>

using namespace std;

int main(){
    int s=0;

    cout<<"Sayiyi giriniz : ";
    cin>>s;
    if(s>=0){
        cout<<"tebrik ederiz 0 dan buyuk deger girdiniz"<<endl;
        if(s%7==0 && s%5==0){
        cout<<"Sayi 7 ye ve 5 e tam bolunur"<<endl;
        }
        else{
        cout<<"Girilen Sayi 7 ye veya 5 e tam bolunemez"<<endl;
        }
    }
    else{
        cout<<"sifirdan kucuk deger giremezsiniz."<<endl;
    }

    return 0;
}
