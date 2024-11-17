//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "set"

// set 和 multiset 的区别

void test01() {
    set<int> s;

    // 插入数据
    s.insert(10);

    //第二次插入失败并接收插入结果
    pair<set<int>::iterator, bool> ret = s.insert(10);

    if (ret.second) {
        cout << "插入成功" << endl;
    } else {
        cout << "插入失败" << endl;
    }
}

int main() {

    test01();

    return 0;
}