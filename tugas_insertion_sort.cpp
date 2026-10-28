#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    system("cls");
    int n;

    cout << "Masukkan jumlah kata: ";
    cin >> n;

    vector<string> data(n);

    for (int i = 0; i < n; i++) {
        cout << "Masukkan kata ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "\nProses Insertion Sort:\n";
        for (int i = 1; i < n; i++) {
        string key = data[i];
        int j = i - 1;

        cout << "\nLangkah " << i << endl;
        cout << "Key: " << key << endl;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];

            cout << "Pergeseran: ";
            for (int k = 0; k < n; k++) {
                cout << data[k] << " ";
            }
            cout << endl;

            j--;
        }

        data[j + 1] = key;

        cout << "Setelah penyisipan: ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil insertion sort: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    cout << endl;
    return 0;
}


