//
// Created by Luojiawei on 24-11-13.
//


#include "iostream"
using namespace std;
#include "list"

//list 赋值与交换

void printList(const list<int> &L) {
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    list<int> l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    printList(l1);

    list<int> l2;
    l2 = l1;
    printList(l2);

    list<int> l3;
    l3.assign(l1.begin(), l1.end());
    printList(l3);

    list<int> l4;
    l4.assign(10, 100);
    printList(l4);
}

//交换
void test02() {
    list<int> l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    list<int> l2;
    l2.assign(5, 100);

    cout << "交换前：" << endl;
    printList(l1);
    printList(l2);

    l1.swap(l2);

    cout << "交换后：" << endl;
    printList(l1);
    printList(l2);
}

int main() {

    test01();

    test02();

    return 0;
}