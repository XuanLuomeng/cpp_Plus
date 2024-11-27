//
// Created by Luojiawei on 24-11-27.
//


#include <algorithm>

#include "iostream"
using namespace std;
#include "vector"

/*
 * fill 算法
 */

void myPrint(int val) {
    cout << val << " ";
}

void test01() {
    vector<int> v;
    v.resize(10);

    //后期重新填充
    fill(v.begin(), v.end(), 100);

    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}

int main() {
    test01();

    return 0;
}