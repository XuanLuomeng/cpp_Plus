//
// Created by Luojiawei on 24-11-18.
//


#include <vector>
#include <algorithm>
#include "iostream"
using namespace std;

/*
 * find 常用查找
 */

class Person {
public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    //重载==
    bool operator==(const Person &p) {
        return this->age == p.age && this->name == p.name;
    }

    string name;
    int age;
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    vector<int>::iterator it = find(v.begin(), v.end(), 5);

    if (it == v.end()) {
        cout << "未找到" << endl;
    } else {
        cout << "找到的位置：" << distance(v.begin(), it) << endl;
    }
}

void test02() {
    vector<Person> v;
    Person p1("A", 10);
    Person p2("B", 20);
    Person p3("C", 30);
    Person p4("D", 40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person p5("B", 20);

    vector<Person>::iterator it = find(v.begin(), v.end(), p5);

    if (it == v.end()) {
        cout << "未找到" << endl;
    } else {
        cout << "找到的位置：" << distance(v.begin(), it) << endl;
    }
}

int main() {
    // test01();

    test02();
    return 0;
}
