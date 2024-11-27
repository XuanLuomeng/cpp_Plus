//
// Created by Luojiawei on 24-11-27.
//


#include "iostream"
using namespace std;
#include "algorithm"
#include "vector"

/*
 * set_difference 求两个集合的差集
 */

void myPrint(int val) {
    cout << val << "\t";
}

void test01() {
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i+5);
    }

    //差集最坏结果就是集合1
    v3.resize(v1.size() > v2.size() ? v1.size() : v2.size());

    vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), itEnd, myPrint);

    cout << endl;
}

int main() {
    test01();
    return 0;
}
