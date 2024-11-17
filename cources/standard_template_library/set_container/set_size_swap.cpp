//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "set"

//set 容器 大小和交换

void printSet(set<int> &s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//大小
void test01() {
    set<int> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);

    printSet(s1);

    cout << "s1的大小为：" << s1.size() << endl;
    cout << "s1是否为空：" << s1.empty() << endl;

    //交换
    set<int> s2;
    s2.insert(100);
    s2.insert(200);

    cout << "交换前s1的大小为：" << s1.size() << endl;
    cout << "交换前s2的大小为：" << s2.size() << endl;

    s1.swap(s2);

    cout << "交换后s1的大小为：" << s1.size() << endl;
    cout << "交换后s2的大小为：" << s2.size() << endl;
    printSet(s1);
    printSet(s2);
}

int main() {
    test01();

    return 0;
}
