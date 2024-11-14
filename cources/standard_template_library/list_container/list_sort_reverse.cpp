//
// Created by Luojiawei on 24-11-13.
//


#include "iostream"
using namespace std;
#include "list"

// list 反转和排序

void printList(const list<int> &L) {
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

bool myCompare(int v1, int v2) {
    return v1 > v2;
}

void test01() {
    //反转
    list<int> ls;
    ls.push_back(23);
    ls.push_back(150);
    ls.push_back(32);
    ls.push_back(13);

    printList(ls);

    ls.reverse();
    printList(ls);

    //不支持随机访问迭代器的迭代器，不能使用标准算法库的算法
    ls.sort();
    printList(ls);

    //倒序 (提供函数指针，让内部排序使用该函数的升序规则，即比较规则)
    ls.sort(myCompare);
    printList(ls);
}

int main() {

    test01();

    return 0;
}