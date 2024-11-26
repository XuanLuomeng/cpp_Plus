//
// Created by Luojiawei on 24-11-26.
//


#include "iostream"
using namespace std;
#include "algorithm"
#include "vector"
#include "ctime"

/*
 * random_shuffle 随机打乱数组
 */

void myPrint(int val) {
    cout << val << " ";
}

void test01() {
    //设置随机数种子
    srand((unsigned int)time(NULL));

    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    //打乱数组
    random_shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), myPrint);
}

int main() {
    test01();

    return 0;
}
