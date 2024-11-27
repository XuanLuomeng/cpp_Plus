//
// Created by Luojiawei on 24-11-27.
//


#include <algorithm>
#include "iostream"
using namespace std;
#include <vector>

/*
 * set_intersection 求两个集合的交集
 */

void myPrint(int val) {
        cout << val << " ";
}

void test01() {
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i + 6);
    }

    vector<int> vTarget;
    //目标容器的大小设置为较小者
    vTarget.resize(v1.size() < v2.size() ? v1.size() : v2.size());
    //返回交集的结束位置
    vector<int>::iterator it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    vTarget.resize(it - vTarget.begin());

    //终点应该训责交集返回的结束位置，因为交集的元素个数不一定等于较小者的大小
    for_each(vTarget.begin(),it,myPrint);
}

int main() {
    test01();
    return 0;
}
