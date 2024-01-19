#include <iostream>
using namespace std;

int main(){
    string karne[5][6] = {
        {"Dersler  ", "Ahmet", "Betul", "Ceren", "Deniz", "Emel "},
        {"Matematik", " 92  ", " 78  ", " 65  ", " 91  ", " 62  "},
        {"Turkce   ", " 99  ", " 67  ", " 34  ", " 98  ", " 45  "},
        {"Ingilizce", " 99  ", " 90  ", " 02  ", " 56  ", " 76  "},
        {"Robotik  ", " 100 ", " 56  ", " 78  ", " 100 ", " 45  "},
    };

    for(int i=0; i<5; i++){
        for(int k=0; k<6; k++){
            cout<< karne[i][k] <<"   ";
        }
        cout<<endl;
    }


    return 0;
}
