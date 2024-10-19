//
// Created by Luojiawei on 24-10-19.
//


#include <deque>

#include "iostream"
using namespace std;

// deque 插入和删除

//deque 的插入和删除提供的位置是迭代器！！！

void printDeque(const deque<int> &d) {
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//两端操作
void test01() {
    deque<int> d1;

    //尾插
    d1.push_back(10);
    d1.push_back(20);

    printDeque(d1);

    //头插
    d1.push_front(100);
    d1.push_front(200);

    printDeque(d1);

    //尾删
    d1.pop_back();
    printDeque(d1);

    //头删
    d1.pop_front();
    printDeque(d1);
}

void test02() {
    deque<int> d1;

    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(30);
    d1.push_front(40);
    printDeque(d1);

    d1.insert(d1.begin(), 100);

    printDeque(d1);

    d1.insert(d1.begin(), 2, 1000);

    printDeque(d1);

    deque<int> d2;
    d2.push_back(100);
    d2.push_back(200);
    d2.push_back(300);

    d1.insert(d1.begin(), d2.begin(), d2.end());

    printDeque(d1);
}

void test03() {
    deque<int> d1;

    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_back(40);

    printDeque(d1);

    d1.erase(d1.begin());
    printDeque(d1);

    //d1.clear()
    d1.erase(d1.begin(), d1.end());
    printDeque(d1);
}

int main() {

    // test01();

    // test02();

    test03();

    return 0;
}