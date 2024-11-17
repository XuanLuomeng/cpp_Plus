//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include  <map>

//map 容器构造和赋值

void printMap(map<int, int> &m) {
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key = " << (*it).first << " value = " << it->second << endl;
    }
    cout << endl;
}

void test01() {
    map<int, int> m;

    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));
    m.insert(pair<int, int>(5, 50));

    printMap(m);

    //通过拷贝构造
    map<int, int> m2(m);

    printMap(m2);

    //通过赋值操作符
    map<int, int> m3;
    m3 = m2;

    printMap(m3);
}

int main() {
    test01();
    return 0;
}
