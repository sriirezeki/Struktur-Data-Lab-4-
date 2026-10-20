
#include <iostream>
using namespace std;

int binarySearch(int data[], int n, int target) {
    int low = 0;       
    int high = n - 1;  

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (data[mid] == target) {
            return mid;  
        } else if (target < data[mid]) {
            high = mid - 1;  
        } else {
            low = mid + 1;   
        }
    }

    return -1; 
}

int main() {
    int n;

    cout << "Masukkan jumlah data nilai mahasiswa: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah data harus lebih dari 0!" << endl;
        return 0;
    }

    int* data = new int[n];

    cout << "Masukkan nilai mahasiswa secara ascending:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> data[i];

        if (i > 0 && data[i] < data[i - 1]) {
            cout << "Nilai harus terurut ascending" << endl;
            delete[] data;
            return 0;
        }
    }

    int target;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;

    int hasil = binarySearch(data, n, target);

    if (hasil != -1) {
        cout << "Data ditemukan pada indeks: "
             << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    delete[] data;

    return 0;
}
