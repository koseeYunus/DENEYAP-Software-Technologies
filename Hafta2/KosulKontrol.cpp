#include <iostream>

using namespace std;

int main(){
    int ali=0;
    int veli=0;
    cout<<"1. Kisinin yasi : ";
    cin>>ali;
    cout<<"2. Kisinin yasi :";
    cin>>veli;
    cout<<"1. kisinin yasi "<<ali<<" 2. kisinin yasi "<<veli<<endl;

    if(ali<veli){
       cout<<"1. KISI 2. KISIDEN KUCUKTUR."<<endl;
    }
    else{
        cout<<"1. KISI 2. KISIDEN BUYUKTUR"<<endl;
    }

    return 0;
}
