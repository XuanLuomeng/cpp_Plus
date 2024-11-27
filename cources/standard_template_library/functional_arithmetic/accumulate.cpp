//
// Created by Luojiawei on 24-11-27.
//


#include "iostream"
using namespace std;
#include <vector>
#include <numeric>

/*
 * accumulate 计算区间总和
 */

void test01() {
    vector<int> v;

    for (int i = 0; i <= 10; i++) {
        v.push_back(i);
    }

    //accumulate 属于 numeric 头文件内
    //first 为起始迭代器，last 为结束迭代器，init 为初始值
    int sum = accumulate(v.begin(), v.end(), 0);

    cout << "total = " << sum << endl;
}

int main() {

    test01();

    return 0;
}