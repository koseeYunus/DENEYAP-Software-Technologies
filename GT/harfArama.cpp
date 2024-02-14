#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace std;

int harfKacKez(char metin[], char karakter){
    int sayac=0;
    for(int i=0; i<strlen(metin); i++){
        if(tolower(metin[i]==karakter)){
            sayac=sayac+1;
        }
    }
    return sayac;
}

int main(){
    char mesaj[]="Bugun gunlerden carsamba";
    char karakter=tolower('c');

    cout<<mesaj<<" cumlesinde "<< harfKacKez(mesaj,karakter)<<" kere "<<karakter<<" harfi gecmektedir."<<endl;

    return 0;
}
