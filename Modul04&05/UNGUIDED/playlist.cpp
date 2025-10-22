#include "playlist.h"

void createList(List &L) {
    L.first = Nil;
}

address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address P) {
    delete P;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

void insertLast(List &L, address P) {
    if (L.first == Nil) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != Nil) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void insertAfterN(List &L, address P, int posisi) {
    address Q = L.first;
    int count = 1;
    while (Q != Nil && count < posisi) {
        Q = Q->next;
        count++;
    }
    if (Q != Nil) { 
        P->next = Q->next;
        Q->next = P;
    } else { 
        cout << "Posisi tidak valid. Lagu ditambahkan di akhir playlist.\n";
        insertLast(L, P);
    }
}

void deleteByTitle(List &L, string judul) {
    if (L.first == Nil) {
        cout << "Playlist kosong.\n";
        return;
    }

    address P = L.first;
    address Prec = Nil;

    while (P != Nil && P->info.judul != judul) {
        Prec = P;
        P = P->next;
    }

    if (P == Nil) {
        cout << "Lagu dengan judul \"" << judul << "\" tidak ditemukan.\n";
    } else {
        if (Prec == Nil) { 
            L.first = P->next;
        } else {
            Prec->next = P->next;
        }
        dealokasi(P);
        cout << "Lagu \"" << judul << "\" berhasil dihapus.\n";
    }
}

void printInfo(List L) {
    if (L.first == Nil) {
        cout << "Playlist kosong.\n";
    } else {
        address P = L.first;
        int i = 1;
        cout << "=== Daftar Lagu dalam Playlist ===\n";
        while (P != Nil) {
            cout << i++ << ". Judul  : " << P->info.judul << endl;
            cout << "   Penyanyi : " << P->info.penyanyi << endl;
            cout << "   Durasi   : " << P->info.durasi << " menit\n";
            cout << "=======================================\n";
            P = P->next;
        }
    }
}
