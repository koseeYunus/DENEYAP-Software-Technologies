#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int oSayisi;
    int sonuc;

    ofstream notlar("snv.txt");

    if(notlar.is_open()){
        cout<<"Sinif mevcudu kac :";
        cin>>oSayisi;

        for(int i=0; i<oSayisi; i++){
            cout<<i+1<<". ogrencinin notu :";
            cin>>sonuc;
            notlar<<sonuc<<endl;
        }

        notlar.close();

        return 0;

    }
    else{
        cout<<"Dosyada sikinti olustu";
        return 0;
    }


}
