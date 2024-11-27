//
// Created by Luojiawei on 24-11-26.
//


#include "iostream"
using namespace std;
#include "vector"
#include "algorithm"

/*
 * merge 合并数组
 */

void myPrint(int val) {
    cout << val << " ";
}

void test01() {
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i+10);
    }

    //目标容器
    vector<int> v3;
    v3.resize(v1.size()+v2.size());

    //合并要求：v1和v2已经排序
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    for_each(v3.begin(), v3.end(), myPrint);
    cout << endl;
}

int main() {
    test01();
    return 0;
}
