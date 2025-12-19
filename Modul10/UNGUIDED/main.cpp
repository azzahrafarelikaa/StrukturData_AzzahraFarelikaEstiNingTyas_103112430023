#include <iostream>
#include "bstree.h"
#include "bstree.cpp"

using namespace std;

int main() {
    address root = Nil;

    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 6); 
    insertNode(root, 7);

    cout << "Inorder        : ";
    printInOrder(root);
    cout << endl;

    cout << "Preorder       : ";
    printPreOrder(root);
    cout << endl;

    cout << "Postorder      : ";
    printPostOrder(root);
    cout << endl;

    cout << "\nKedalaman      : " << hitungKedalaman(root) << endl;
    cout << "Jumlah Node    : " << hitungJumlahNode(root) << endl;
    cout << "Total          : " << hitungTotalInfo(root) << endl;

    return 0;
}
