#include <iostream>
using namespace std;

int main() {
    int a [3][3][4];
    int angka = 2;

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<4; k++){
            a[i][j][k] = angka;
            angka = angka + 2;
            }
        }
    }
    
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<4; k++){
                cout << a[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}