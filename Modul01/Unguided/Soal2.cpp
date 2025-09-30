#include <iostream>
using namespace std;

string satuan[] = {
    "nol", "satu", "dua", "tiga", "empat",
    "lima", "enam", "tujuh", "delapan", "sembilan",
    "sepuluh", "sebelas"
};

// Fungsi pengubahnya
string terbilang(int n) {
    if (n < 12)
        return satuan[n];
    else if (n < 20)
        return satuan[n - 10] + " belas";
    else if (n < 100) {
        int puluh = n / 10;
        int sisa = n % 10;
        string hasil = satuan[puluh] + " puluh";
        if (sisa != 0)
            hasil += " " + satuan[sisa];
        return hasil;
    } else if (n == 100)
        return "seratus";
    else
        return "di luar jangkauan";
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka di luar jangkauan" << endl;
    } else {
        cout << terbilang(angka) << endl;
    }

    return 0;
}
