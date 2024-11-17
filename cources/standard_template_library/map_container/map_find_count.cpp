//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "map"

// map 查找和统计

void test01() {
    //查找
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));

    map<int, int>::iterator pos = m.find(3);
    // map<int, int>::iterator pos = m.find(4);
    if (pos != m.end()) {
        cout << "找到了元素，值为：" << pos->second << endl;
    } else {
        cout << "未找到元素" << endl;
    }

    //统计
    int num = m.count(3);
    cout << "m中key为3的元素个数为：" << num << endl;
}

int main() {
    test01();

    return 0;
}