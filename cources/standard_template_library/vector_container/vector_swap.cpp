//
// Created by Luojiawei on 24-10-18.
//

#include <vector>
#include "iostream"
using namespace std;

/* vector容器互换
 * swap()
 */

void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2;
    for (int i = 5; i < 15; ++i) {
        v2.push_back(i);
    }
    printVector(v2);

    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

//使用场景
//巧用 swap() 收缩capacity容量
void test02() {
    vector<int> v;
    for (int i = 0; i < 100000; ++i) {
        v.push_back(i);
    }

    cout << "v size = " << v.size() << endl;
    cout << "v capacity = " << v.capacity() << endl;

    cout << "-----v.resize(10)-----" << endl;
    v.resize(10);
    cout << "v size = " << v.size() << endl;
    cout << "v capacity = " << v.capacity() << endl;

    cout << "-----v.swap()-----" << endl;
    vector<int> (v).swap(v);
    cout << "v size = " << v.size() << endl;
    cout << "v capacity = " << v.capacity() << endl;
}

int main() {

    // test01();

    test02();

    return 0;
}