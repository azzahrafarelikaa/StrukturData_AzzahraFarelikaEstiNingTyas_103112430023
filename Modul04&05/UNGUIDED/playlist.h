#ifndef PLAYLIST_H_INCLUDED
#define PLAYLIST_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

#define Nil NULL

struct Lagu {
    string judul;
    string penyanyi;
    float durasi;
};

typedef Lagu infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address P);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfterN(List &L, address P, int posisi);
void deleteByTitle(List &L, string judul);
void printInfo(List L);

#endif
