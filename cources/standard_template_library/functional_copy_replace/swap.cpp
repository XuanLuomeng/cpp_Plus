//
// Created by Luojiawei on 24-11-27.
//


#include "iostream"
using namespace std;
#include <vector>
#include <algorithm>

/*
 * swap 容器内容替换
 */
class MyPrint {
public:
    void operator()(int val) {
        cout << val << "\t";
    }
};

void test01() {
    vector<int> v;
    vector<int> v2;

    for (int i = 0; i < 10; i++) {
        v.push_back(i);
        v2.push_back(i+10);
    }

    swap(v, v2);

    //for_each 算法遍历循环
    for_each(v.begin(), v.end(), MyPrint());
    cout << endl;

    //for_each 遍历循环
    for (auto &item : v2) {
        cout << item << "\t";
    }
}

int main() {
    test01();
    return 0;
}
