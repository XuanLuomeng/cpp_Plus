//
// Created by Luojiawei on 24-10-16.
//


#include "iostream"
using namespace std;

//string字串

void test01() {
    string str = "hello world";

    //从pos开始截取n个字符
    string subStr = str.substr(1, 3);

    cout << "subStr = " << subStr << endl;
}

int main() {

    test01();

    return 0;
}