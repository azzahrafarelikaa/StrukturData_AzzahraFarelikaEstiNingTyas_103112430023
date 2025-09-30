#include <iostream>
using namespace std;

int main() {
    float a, b;

    // Input dua bilangan float
    cout << "Masukkan bilangan desimal pertama: ";
    cin >> a;
    cout << "Masukkan bilangan desimal kedua: ";
    cin >> b;

    // Operasi aritmatika dan outpt
    cout << "Hasil Penjumlahan dari " << a << " dan " << b << " adalah " << a + b << endl;
    cout << "Hasil Pengurangan dari " << a << " dan " << b << " adalah " << a - b << endl;
    cout << "Hasil Perkalian dari " << a << " dan " << b << " adalah " << a * b << endl;
    
    if (b != 0) {
        cout << "Hasil Pembagian dari " << a << " dan " << b << " adalah " << a / b << endl;
    } else {
        cout << "Pembagian tidak bisa dilakukan karena penyebut bernilai nol." << endl;
    }

    return 0;
}
