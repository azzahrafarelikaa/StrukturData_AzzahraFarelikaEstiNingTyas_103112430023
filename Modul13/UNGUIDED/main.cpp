#include "multilist.h"
#include "multilist.cpp"
#include <iostream>
using namespace std;

int main() {
    listinduk L;
    address P_induk;
    address_anak P_anak;
    
    CreateList(L);
        
    cout << "Menambah data Parent" << endl;
    P_induk = alokasi(1);
    insertFirst(L, P_induk);
    
    P_induk = alokasi(2);
    insertLast(L, P_induk);
    
    P_induk = alokasi(3);
    insertLast(L, P_induk);
    
    cout << "Menambah anak untuk parent 1" << endl;
    P_induk = findElm(L, 1);
    if (P_induk != Nil) {
        P_anak = alokasiAnak(101);
        insertFirstAnak(P_induk->lanak, P_anak);
        
        P_anak = alokasiAnak(102);
        insertLastAnak(P_induk->lanak, P_anak);
        
        P_anak = alokasiAnak(103);
        insertLastAnak(P_induk->lanak, P_anak);
    }
    
    cout << "Menambah anak untuk parent 2" << endl;
    P_induk = findElm(L, 2);
    if (P_induk != Nil) {
        P_anak = alokasiAnak(201);
        insertFirstAnak(P_induk->lanak, P_anak);
        
        P_anak = alokasiAnak(202);
        insertLastAnak(P_induk->lanak, P_anak);
    }
    
    cout << "Menambah anak untuk parent 3" << endl;
    P_induk = findElm(L, 3);
    if (P_induk != Nil) {
        P_anak = alokasiAnak(301);
        insertFirstAnak(P_induk->lanak, P_anak);
    }
    
    cout << endl;
    printInfo(L);
    
    cout << endl << "Menghapus anak 102 dari parent 1..." << endl;
    P_induk = findElm(L, 1);
    if (P_induk != Nil) {
        delPAnak(P_induk->lanak, 102);
    }
    
    printInfo(L);
    
    cout << endl << "Menghapus parent 2 beserta semua anaknya..." << endl;
    delP(L, 2);
    
    printInfo(L);
    
    cout << endl << "Jumlah parent: " << nbList(L) << endl;
    
    delAll(L);
    
    return 0;
}