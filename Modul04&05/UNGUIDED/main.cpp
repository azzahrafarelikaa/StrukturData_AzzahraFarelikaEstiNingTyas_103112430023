#include "playlist.h"
#include "playlist.cpp"

int main() {
    List L;
    createList(L);

    infotype lagu;
    address P;

    lagu = {"Komeng", "Fafa", 2.12};
    P = alokasi(lagu);
    insertFirst(L, P);

    lagu = {"Que Sera Sera", "Sara", 3.20};
    P = alokasi(lagu);
    insertFirst(L, P);

    lagu = {"Only", "Fersa", 2.45};
    P = alokasi(lagu);
    insertLast(L, P);

    lagu = {"La Vita La Avanti", "Kai", 3.14};
    P = alokasi(lagu);
    insertAfterN(L, P, 3);

    printInfo(L);

    cout << endl;

    deleteByTitle(L, "Only");

    cout << endl << "Setelah penghapusan:\n";
    printInfo(L);

    return 0;
}
