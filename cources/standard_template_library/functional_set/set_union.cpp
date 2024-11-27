//
// Created by Luojiawei on 24-11-27.
//


#include "iostream"
using namespace std;
#include "vector"
#include "algorithm"

/*
 * set_union 两个序列合并，不重复。即并集
 */

void myPrint(int val) {
    cout << val << " ";
}

void test01() {
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    vector<int> vTarget;
    //给目标容器提前开辟空间，最特殊的情况是并集大小为两个容器的并集大小之和
    vTarget.resize(v1.size() + v2.size());

    vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    vTarget.resize(itEnd - vTarget.begin());

    for_each(vTarget.begin(), itEnd, myPrint);
    cout << endl;
}

int main() {
    test01();
    return 0;
}
