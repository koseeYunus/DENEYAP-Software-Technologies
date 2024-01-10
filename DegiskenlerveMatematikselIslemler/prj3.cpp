#include <iostream>
using namespace std;
int main(){
    int a=6;
    int b=7;
    float c=4.5;
    double d=33;

    float snc=0;

    a=b+a;
    c=b++;
    c=c+b;
    d=++c;
    snc=a+b+c+d;


    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << "d : " << d << endl;
    cout << "hepsinin toplami : " << snc << endl;



    return 0;
}
