//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "map"

// mpa 大小和交换

void printMap(map<int, int> &m) {
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

void test01() {
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));
    printMap(m);

    cout << "m.size() = " << m.size() << endl;
    cout << "m.empty() = " << m.empty() << endl;

    map<int, int> m2;
    m2.insert(pair<int, int>(5, 50));
    m2.insert(pair<int, int>(6, 60));
    m2.insert(pair<int, int>(7, 70));
    m2.insert(pair<int, int>(8, 80));
    printMap(m2);

    m.swap(m2);
    cout << "======交换后======" << endl;
    printMap(m);
    printMap(m2);
}

int main() {
    test01();
    return 0;
}
