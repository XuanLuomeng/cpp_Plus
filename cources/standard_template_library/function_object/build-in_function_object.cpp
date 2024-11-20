//
// Created by Luojiawei on 24-11-17.
//


#include "iostream"
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

/*
 * 内建函数对象 算数仿函数
 * negate 一元仿函数 取反仿函数
 */

void test01() {
    negate<int> n;
    cout << n(10) << endl;
}

void test02() {
    plus<int> p;
    cout << p(10, 20) << endl;
}

/*
 * 内建函数对象   关系仿函数
 * 大于   greater
 */

void test03() {
    greater<int> g;
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    sort(v.begin(), v.end(), g);

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

/*
 * 内建函数对象   逻辑仿函数
 * logical_and/or/not   逻辑与/或/非
 */

void test04() {
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    vector<bool> v2;
    v2.resize(v.size());

    transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

    for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    cout << "negate" << endl;

    test01();

    cout << "plus" << endl;

    test02();

    cout << "greater" << endl;
    test03();

    cout << "logical_and" << endl;
    test04();

    return 0;
}
