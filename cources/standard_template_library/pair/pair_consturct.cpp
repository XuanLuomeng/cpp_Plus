//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;

//pair 对组创建

void test01() {
    pair<string, int> p("hello", 10);

    cout << p.first << " " << p.second << endl;

    pair<string, string> p2 = make_pair("hello", "world");
    cout << p2.first << " " << p2.second << endl;
}

int main() {
    test01();

    return 0;
}
