#include <iostream>
using namespace std;

int main(){

int ders[5][3] ={{56,66,87},
                  {89,54,89},
                  {34,54,78},
                  {56,4,87},
                  {12,56,67},
                };

    for(int i=0; i<5; i++){
        cout<<i+1<<". ders notlari : ";
        for(int k=0; k<3; k++){
            cout<<ders[i][k]<<"    ";
        }
        cout<<endl;
    }

    return 0;

}
