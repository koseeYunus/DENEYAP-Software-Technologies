#include <iostream>
using namespace std;

int main(){
    int a=0;

    cout<< "Bir sayi giriniz : ";
    cin>> a;

    if(a>=0){

        if(a%3==0){
            cout<<"girilen deger 3 e tam bolunur."<< endl;
        }
        else{
            cout<<"girilen deger 3 e tam bolunmez."<< endl;
        }

    }
    else{
        cout<<"girilen deger 0 dan kucuktur"<< endl;
    }

    return 0;

}
