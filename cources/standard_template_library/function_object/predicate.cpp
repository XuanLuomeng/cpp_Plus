//
// Created by Luojiawei on 24-11-17.
//


#include "iostream"
using namespace std;
#include "vector"
#include "algorithm"

/*
 * 谓词
 * 返回bool类型的仿函数称为谓词
 * 传递的参数个数代表元的个数
 */

class GreaterFive {
public:
    bool operator()(int val) {
        return val > 5;
    }
};

class MyCompare {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive()); //GreaterFive()是匿名函数对象
    if (it != v.end()) {
        cout << "找到：" << *it << endl;
    } else {
        cout << "未找到" << endl;
    }
}

void test02() {
    vector<int> v;
    v.push_back(60);
    v.push_back(20);
    v.push_back(40);
    v.push_back(10);
    v.push_back(30);

    sort(v.begin(), v.end(),MyCompare());

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // test01();

    test02();

    return 0;
}
