//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "set"

//set 查找和统计

void printSet(set<int> &s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    set<int> s1;

    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    //查找
    set<int>::iterator pos = s1.find(30);   //返回迭代器
    if (pos != s1.end()) {
        cout << "找到元素：" << *pos << endl;
    } else {
        cout << "未找到元素" << endl;
    }

    //统计，对于set统计结果只能是0或1
    int num = s1.count(30);
    cout << "num =" << num << endl;
}

int main() {
    test01();

    return 0;
}
