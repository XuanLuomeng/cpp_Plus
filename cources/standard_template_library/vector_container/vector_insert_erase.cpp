//
// Created by Luojiawei on 24-10-18.
//

#include <vector>
#include "iostream"
using namespace std;

/* vector 插入与删除
 * push_back()  尾插
 * pop_back()   尾删
 * insert()     插入
 * erase()      删除
 * clear()      清空
 */

void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    vector<int> v;
    //尾插
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    printVector(v);

    v.pop_back();
    printVector(v);

    v.insert(v.begin(), 100);
    printVector(v);

    v.erase(v.begin());
    printVector(v);

    v.clear();
    cout << "=== v.clear() ===" << endl;
    printVector(v);
}

int main() {

    test01();

    return 0;
}