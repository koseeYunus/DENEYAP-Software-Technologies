#include <iostream>
using namespace std;

void yaz(int kere, string metin1, string metin2, string metin3){
    for(int i=0; i<kere; i++){
        cout<< i+1 <<") "<< metin1<<" " << metin2 << " "<< metin3 <<endl;
    }
}

int main(){
    int a;
    string m, n, t;
    cout<<"Tekrar edilecek metinin 1. kismi : ";
    cin>>m;
    cout<<"Tekrar edilecek metinin 2. kismi : ";
    cin>>n;
    cout<<"Tekrar edilecek metinin 3. kismi : ";
    cin>>t;
    cout<<"Kac kere tekrar edilsin : ";
    cin>>a;
    yaz(a, m, n, t);
    return main();
}
