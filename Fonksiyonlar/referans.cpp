#include <iostream>
using namespace std;

void f1(int yas){
    yas=15;

}

void f2(int& sayi){
    sayi=25;
}

int main(){
    int yas=22;
    f1(yas);
    cout<<"1. sonuc : "<< yas<< endl;

    f2(yas);
    cout<<"2. sonuc : "<< yas<< endl;

    return 0;
}
