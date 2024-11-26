//
// Created by Luojiawei on 24-11-26.
//


#include "iostream"
using namespace std;
#include "algorithm"
#include "vector"
#include "functional"

/*
 * sort排序
 */

void myPrint(int val) {
    cout << val << " ";
}

void test01() {
    vector<int> v;

    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);

    //升序
    sort(v.begin(), v.end());

    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

    //降序
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), myPrint);
}

int main() {
    test01();

    return 0;
}