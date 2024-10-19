//
// Created by Luojiawei on 24-10-19.
//


#include <deque>

#include "iostream"
using namespace std;

//deque 大小操作，deque没有容量概念

void printDeque(const deque<int> &d) {
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    deque<int> d1;
    for (int i = 0; i < 10; ++i) {
        d1.push_back(i);
    }
    printDeque(d1);

    if (d1.empty()) {
        cout << "d1为空" << endl;
    } else {
        cout << "d1不为空" << endl;
        cout << "d1的大小为：" << d1.size() << endl;
    }

    d1.pop_back();
    printDeque(d1);
    cout << "d1的大小为：" << d1.size() << endl;

    d1.resize(10);
    printDeque(d1);
    cout << "d1的大小为：" << d1.size() << endl;

    d1.resize(5);
    printDeque(d1);
    cout << "d1的大小为：" << d1.size() << endl;
}

int main() {

    test01();

    return 0;
}