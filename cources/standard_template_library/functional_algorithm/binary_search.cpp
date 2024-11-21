//
// Created by Luojiawei on 24-11-21.
//


#include "iostream"
using namespace std;
#include <vector>
#include <algorithm>

/*
 * 常用查找算法 binary_search
 * 二分查找
 * 二分查找必须是有序的
 */

void test01() {
    vector<int> v;
    //必须有序！！！这跟二分查找算法实现有关
    for (int i = 0; i < 50; i++) {
        v.push_back(i);
    }

    //查找17
    bool re = binary_search(v.begin(),v.end(),17);
    if(re) {
        cout << "找到了" << endl;
    } else {
        cout << "没找到" << endl;
    }
}

int main() {

    test01();

    return 0;
}