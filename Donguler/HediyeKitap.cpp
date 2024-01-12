#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int r;
    srand(time(0));

    for(int i=1; i<=10; i++){
        r=50 + rand()%50;
        cout<<"Hediye kitabi kazanan "<< i << ". ogrencinin numarasi : "<< r << endl;

    }

    return 0;
}
