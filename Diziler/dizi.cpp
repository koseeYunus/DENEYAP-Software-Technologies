#include <iostream>
using namespace std;

int main(){
    int sayilar[]={23,24,25,45,56,45};

    for(int i=0; i<6; i++){
        cout<<"Dizinin "<<i+1<<" elemani ";
        cout<< sayilar[i]<< endl;
    }

    return 0;
}
