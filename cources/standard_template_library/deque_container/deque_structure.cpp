//
// Created by Luojiawei on 24-10-19.
//


#include <deque>
#include "iostream"
using namespace std;

//deque 构造函数

void printDeque(const deque<int> &d) {
    //const_iterator 表示只读迭代器 不能修改
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    deque<int> d;
    for (int i = 0; i < 10; ++i) {
        d.push_back(i);
    }
    printDeque(d);

    deque<int> d2(d.begin(), d.end());
    printDeque(d2);

    deque<int> d3(10,100);
    printDeque(d3);

    deque<int> d4(d3);
    printDeque(d4);
}

int main() {

    test01();

    return 0;
}