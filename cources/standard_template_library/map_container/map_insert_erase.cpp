//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "map"

// map 插入与删除

void printMap(map<int,int> &m) {
    for (map<int,int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

void test01() {
    map<int,int> m;

    m.insert(pair<int,int>(1,10));
    m.insert(make_pair(2,20));
    m.insert(map<int,int>::value_type(3,30));
    //不建议用[]赋值，会造成数据覆盖问题，或者是生存不存在的默认map值，[]多用于获取键值对
    m[4] = 40;

    printMap(m);

    m.erase(m.begin());
    printMap(m);

    //按照键值删除
    m.erase(2);
    printMap(m);

    //区间删除
    m.erase(m.begin(),m.end());

    //清空
    m.clear();
}

int main() {
    test01();

    return 0;
}