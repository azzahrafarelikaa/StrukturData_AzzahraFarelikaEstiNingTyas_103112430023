#include <iostream>
using namespace std;

// Menghitung rata-rata nilai
float hitungRata(int nilai[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai[i];
    }
    return static_cast<float>(total) / n;
}

// Mencari nilai maksimal dan minimakl
void cariMinMax(int nilai[], int n, int &maks, int &min) {
    maks = nilai[0];
    min = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > maks)
            maks = nilai[i];
        if (nilai[i] < min)
            min = nilai[i];
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah siswa: ";
    cin >> N;

    int nilai[N];
    cout << "\nMasukkan nilai ujian untuk " << N << " siswa:\n";
    for (int i = 0; i < N; i++) {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Panggil fungsi
    float rata = hitungRata(nilai, N);
    int maks, min;
    cariMinMax(nilai, N, maks, min);

    // Tampilkan hasil
    cout << "\n------ Hasil Perhitungan ------\n";
    cout << "Rata-rata kelas : " << rata << endl;
    cout << "Nilai tertinggi : " << maks << endl;
    cout << "Nilai terendah  : " << min << endl;

    return 0;
}