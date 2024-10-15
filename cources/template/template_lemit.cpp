//
// Created by Luojiawei on 24-10-14.
//


#include "iostream"
using namespace std;

/**
 * 模板局限性
 * 模板并不万能，有些特定数据类型需要用具体化方式做特殊实现
 */

class Person {
public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    string name;
    int age;
};

//对比两个数据是否相等函数
template<class T>
bool myEqual(T a, T b) {
    return a == b ? true : false;
}

//利用具体化Person的版本实现代码，具体化优先调用
template<>
bool myEqual(Person a, Person b) {
    return a.name == b.name && a.age == b.age;
}

void test01() {
    int a = 10;
    int b = 20;
    cout << myEqual(a, b) << endl;
}

void test02() {
    Person p1("Tom", 10);
    Person p2("Tom", 10);
    cout << myEqual(p1, p2) << endl;
}

int main() {
    // test01();

    test02();
    return 0;
}
