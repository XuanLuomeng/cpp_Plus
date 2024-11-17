//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "set"

void printSet(set<int> &s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

// set 插入和删除
void test01() {
    set<int> s1;

    //插入
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    printSet(s1);

    s1.erase(s1.begin());
    printSet(s1);

    s1.erase(30);
    printSet(s1);

    s1.clear();
    printSet(s1);
}

int main() {
    test01();

    return 0;
}
