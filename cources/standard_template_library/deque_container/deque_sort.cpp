//
// Created by Luojiawei on 24-10-20.
//


#include <deque>
#include <algorithm>
#include "iostream"
using namespace std;

//deque容器排序

void printDeque(const deque<int> &d) {
    for (auto i : d) {
        cout << i << " ";
    }
    cout << endl;
}

void test01() {
    deque<int> d;
    d.push_back(10);
    d.push_back(30);
    d.push_back(20);
    d.push_front(40);
    d.push_front(50);

    printDeque(d);

    //默认排序是从小到大,支持随机访问的迭代器的容器都支持用sort进行排序
    sort(d.begin(),d.end());

    printDeque(d);
}

int main() {

    test01();

    return 0;
}