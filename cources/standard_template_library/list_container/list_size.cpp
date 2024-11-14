//
// Created by Luojiawei on 24-11-13.
//


#include "iostream"
using namespace std;
#include "list"

// list容器的size和empty函数

void printList(const list<int> &L) {
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    list<int> L;
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);

    cout << "L.size = " << L.size() << endl;
    cout << "L.empty = " << L.empty() << endl;
    cout << "L.front = " << L.front() << endl;
    cout << "L.back = " << L.back() << endl;

    printList(L);

    L.resize(10);
    printList(L);
    L.resize(5);
    printList(L);
}

int main() {
    test01();

    return 0;
}
