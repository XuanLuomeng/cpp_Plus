//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "set"

//set容器构造和赋值

void printSet(const set<int> &s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    set<int> s1;
    //set 的插入只能用insert
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    printSet(s1);

    //第一种赋值方式
    set<int> s2(s1.begin(), s1.end());
    printSet(s2);

    //第二种赋值方式
    set<int> s3(s2);
    printSet(s3);
}

int main() {

    test01();

    return 0;
}