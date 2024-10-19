//
// Created by Luojiawei on 24-10-18.
//


#include <vector>

#include "iostream"
using namespace std;

/* vector容器 数据存取
 * at(int index)
 * []
 * front()
 * back()
 */

void test01() {
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }

    for (int i = 0; i < v1.size(); i++) {
        cout << v1.at(i) << " ";
    }
    cout << endl;

    cout << "v1.at(5) = " << v1.at(5) << endl;
    cout << "v1.front() = " << v1.front() << endl;
    cout << "v1.back() = " << v1.back() << endl;
    cout << "v1[5] = " << v1[5] << endl;
}

int main() {

    test01();

    return 0;
}