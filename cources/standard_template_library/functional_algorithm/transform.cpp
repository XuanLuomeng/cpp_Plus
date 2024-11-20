//
// Created by Luojiawei on 24-11-17.
//


#include "iostream"
using namespace std;
#include <vector>
#include <algorithm>

/*
 * 常用遍历算法中的 transform
 */

class TransForm {
public:
    int operator()(int v) {
        return v;
    }
};

class MyPrint {
public:
    void operator()(int val) const{
        cout << val << " ";
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    vector<int> vTarget;
    //目标容器必须提前设定好所需的空间
    vTarget.resize(v.size());

    transform(v.begin(), v.end(), vTarget.begin(), TransForm());

    for_each(vTarget.begin(), vTarget.end(), MyPrint());
    cout << endl;
}

int main() {
    test01();

    return 0;
}
