//
// Created by Luojiawei on 24-11-27.
//


#include "iostream"
using namespace std;
#include "vector"
#include "algorithm"

/*
 * copy 拷贝算法(少用，因为直接用==基本就够了)
 */

void myPrint(int val) {
    cout << val << " ";
}

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    vector<int> v2;
    //需要提前分配空间
    v2.resize(v.size());
    copy(v.begin(), v.end(), v2.begin());
    for_each(v2.begin(), v2.end(), myPrint);
    cout << endl;
}

int main() {
    test01();
    return 0;
}
