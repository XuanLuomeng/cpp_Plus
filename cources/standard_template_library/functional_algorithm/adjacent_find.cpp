//
// Created by Luojiawei on 24-11-21.
//


#include "iostream"
using namespace std;
#include "vector"
#include <algorithm>

/*
 * 常用查找算法  adjacent_find
 * 功能：查找相邻重复元素
 */

void test01() {
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);

    vector<int>::iterator it = adjacent_find(v.begin(), v.end());

    if (it == v.end()) {
        cout << "没有相邻重复元素" << endl;
    } else {
        cout << "找到相邻重复元素为：" << *it << endl;
    }

}

int main() {
    test01();

    return 0;
}