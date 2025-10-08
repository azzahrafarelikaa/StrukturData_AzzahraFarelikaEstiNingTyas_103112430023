#include <iostream>
using namespace std;

// Prosedur
void tampilSegitiga(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah baris (n): ";
    cin >> n;

    cout << "\n------ Pola Segitiga Angka ------\n";
    tampilSegitiga(n);

    return 0;
}