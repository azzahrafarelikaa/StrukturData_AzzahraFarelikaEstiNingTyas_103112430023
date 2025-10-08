#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah elemen array (N): ";
    cin >> N;

    // Alokasi array secara dinamis
    int *arr = new int[N];

    // Input nilai melalui pointer
    cout << "\nMasukkan " << N << " bilangan bulat:\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> *(arr + i); 
    }

    // Inisialisasi nilai awal
    int jumlah = 0;
    int maks = *arr;
    int min = *arr;

    // Menghitung jumlah, maksimum, dan minimum degan pointer
    for (int *p = arr; p < arr + N; p++) {
        jumlah += *p;
        if (*p > maks)
            maks = *p;
        if (*p < min)
            min = *p;
    }

    // Tampilkan hasil
    cout << "\n------ Hasil Perhitungan ------\n";
    cout << "Jumlah seluruh bilangan : " << jumlah << endl;
    cout << "Nilai maksimum          : " << maks << endl;
    cout << "Nilai minimum           : " << min << endl;

    // Hapus memori yang dialokasikan
    delete[] arr;

    return 0;
}