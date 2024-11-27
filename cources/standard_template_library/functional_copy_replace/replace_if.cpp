//
// Created by Luojiawei on 24-11-27.
//


#include "iostream"
using namespace std;
#include "vector"
#include "algorithm"

/*
 * replace_if 条件替换
 */

void myPrint(int val) {
    cout << val << " ";
}

class myCompare {
public:
    bool operator()(int val) {
        return val >= 30;
    }
};

void test01() {
    vector<int> v;

    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(10);
    v.push_back(20);

    cout << "替换前：";
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

    //见大于等于30的数 替换为0
    replace_if(v.begin(),v.end(),myCompare(),0);
    cout << "替换后：";
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}

int main() {
    test01();

    return 0;
}