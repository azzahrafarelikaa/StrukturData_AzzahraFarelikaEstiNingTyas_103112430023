#include <iostream>
#define MAX 5 // Ukuran array
using namespace std;

int main () {
    int i, j;
    float nilai[MAX]; // Array satu dimensi
    static int nilai_tahun[MAX][MAX] = { // Array dua dimensi
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };

    // Input data array satu dimensi
    cout << "=== Input Nilai Siswa ===\n";
    for (i = 0; i < MAX; i++) {
        cout << "Masukan nilai ke-" << i + 1
        << ": ";
        cin >> nilai[i];
    }

    //Menampilkan isi array satu dimensi
    cout << "\n=== Data Nilai Siswa ===\n";
    for (i = 0; i < MAX; i++) {
        cout << "Nilai ke-" << i + 1 << " = "
        << nilai[i]
        << endl;
    }

    // Menampilkan isi array dua dimensi
    cout << "\n=== Nilai Tahunan ===\n";
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}