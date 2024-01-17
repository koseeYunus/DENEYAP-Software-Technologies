#include <iostream>
using namespace std;

int kalanBul(int a, int b){
    if(a==b){
        return 0;
    }
    else if(a>b){
        return a%b;
    }
    else{
        return b%a;
    }
}


int main(){
    int s=kalanBul(12,25);
    cout<< "mode isleminin sonucu : "<< s << endl;

    return 0;
}
