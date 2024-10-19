//
// Created by Luojiawei on 24-10-18.
//

#include "vector"
#include "iostream"
using namespace std;

void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//vector容器的容量和大小操作
void test01() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty()) {
        //为真则容器为空
        cout << "v1为空" << endl;
    } else {
        cout << "v1不为空" << endl;
        cout << "v1的容量为：" << v1.capacity() << endl;
        cout << "v1的大小为：" << v1.size() << endl;
    }

    //重新指定大小
    v1.resize(20,50);   //利用重载版本，可以指定默认填充值，参数2
    //重新指定的比原来的长，那么默认用0填充
    printVector(v1);
    cout << "重新指定大小后的大小：" << v1.size() << endl;
    cout << "重新指定大小后的容量：" << v1.capacity() << endl;

    v1.resize(5);
    printVector(v1);
    cout << "重新指定大小后的大小：" << v1.size() << endl;
    //容量只大不小
    cout << "重新指定大小后的容量：" << v1.capacity() << endl;
}

int main() {

    test01();

    return 0;
}
