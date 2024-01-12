#include <iostream>
using namespace std;
int main(){
    int a=0;
    while(a<0){
        if(a%2==0){
            cout<<a<<endl;
        }
        a=a+1;
    }
    cout<<"------------------------------"<<endl;
    int b=1;
    do{
        if(b%2==1){
            cout<<b<<endl;
        }
        b=b+1;
    }while(b<1);

    int toplam=0;

    for(int i=0; i<20; i=i+1){

        int puan;
        cout<< i+1 << ". ogrencinin puani : ";
        cin>> puan;
        toplam= toplam+puan;
    }
    cout<< "Ogrencilerin ortalamasi : "<<toplam/20;
    return 0;
}
