//
// Created by Luojiawei on 24-11-26.
//


#include "iostream"
using namespace std;
#include "algorithm"
#include "vector"

/*
 * reverse 数组反转
 */

void myPrint(int val) {
    cout << val << " ";
}

void test01() {
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(40);
    v.push_back(20);

    cout << "反转前：" << endl;
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

    reverse(v.begin(), v.end());
    cout << "反转后：" << endl;
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}

int main() {
    test01();
    return 0;
}
