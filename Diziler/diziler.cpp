#include <iostream>
using namespace std;

int main(){
    int yaslar[5] = {15, 8, 22, 16, 25};
    string kitaplar[5] = {"kitap1", "kitap2", "kitap3", "kitap4", "kitap5"};

    for(int i=0; i<5; i++){
        cout<< i+1 << ". kisinin yasi : "<< yaslar[i];
        cout<<" ve kitabida "<< kitaplar[i]<< "dir."<<endl;
    }

    return 0;
}
