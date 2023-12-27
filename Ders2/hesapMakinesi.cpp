#include <iostream>
using namespace std;
int main(){
    char islem;
    int a;
    int b;

    cout<< "1. Sayiyi giriniz :";
    cin>>a;

    cout<< "matamtiksel islem girin :";
    cin>>islem;

    cout<< "2. Sayiyi giriniz :";
    cin>>b;


    if(islem=='+'){
        cout<<"toplama islemi : "<<a+b;
    }
    else if(islem=='-'){
        cout<<"cikarma islemi : "<<a-b;
    }
    else if(islem=='*'){
        cout<<"carpma islemi : "<<a*b;
    }
    else if(islem=='/'){
        cout<<"bolme islemi : "<<a/b;
    }
    else{
        cout<<"HATALI GIRIS";
    }

    return 0;

}
