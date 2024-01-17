#include <iostream>
using namespace std;

int faktoriyel(int s){
    if(s == 1){
        return 1;
    }
    else{
        return s*faktoriyel(s-1);
    }

}

int main(){
    int sonuc= faktoriyel(8);
    cout<< "faktoriyel sonucu : "<< sonuc<< endl;
    return 0;
}
