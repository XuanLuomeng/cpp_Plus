//
// Created by Luojiawei on 24-11-13.
//


#include "iostream"
using namespace std;
#include "list"

// list容器

void printList(const list<int> &L) {
    for(list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test() {
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    printList(l);

    list<int> l2(l.begin(), l.end());
    printList(l2);

    list<int> l3(l2);
    printList(l3);

    list<int> l4(10, 100);
    printList(l4);
}

int main() {

    test();

    return 0;
}