#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int sayi1, sayi2;
    srand(time(0));
    int rastgele;
    for(int i=1; i<=50; i++){
        rastgele= 100+rand()%250;
        cout<< "Rastgele olusturulan "<< i <<". sayi : "<<rastgele<<endl;
    }
    cout<<"----------------------------------------------"<<endl;
    sayi1= 100 + rand()%150;
    sayi2= 100 + rand()%150;
    cout<< "Rastgele olusturulan sayi1 degeri : "<<sayi1<<endl;
    cout<< "Rastgele olusturulan sayi2 degeri : "<<sayi2<<endl;
    if(sayi1<sayi2){
        cout<< sayi1<<" degeri "<<sayi2<<" degerinden kucuktur."<<endl;
    }
    else{
        cout<< sayi1<<" degeri "<<sayi2<<" degerinden buyuktur."<<endl;
    }
    return 0;
}
