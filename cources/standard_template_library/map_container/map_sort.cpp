//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "map"

// map 排序

class MyCompare {
public:
    bool operator()(int v1, int v2) const {
        return v1 > v2;
    }
};

void printMap(map<int, int> &m) {
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

void test01() {
    map<int, int, MyCompare> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));

    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

int main() {
    test01();

    return 0;
}
