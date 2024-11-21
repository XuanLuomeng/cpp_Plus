//
// Created by Luojiawei on 24-11-21.
//


#include "iostream"
using namespace std;
#include <vector>
#include <algorithm>

/*
 * 常用查找算法 find_if
 */

//1、查找内置数据类型
class GreaterFive {
public:
    bool operator()(int x) {
        return x > 5;
    }
};

class Person {
public:
    Person(string name,int age) {
        this->m_Age = age;
        this->m_Name = name;
    }
    string m_Name;
    int m_Age;
};

class Greater20 {
    public:
    bool operator()(Person &p) {
        return p.m_Age > 20;
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it == v.end()) {
        cout << "没有找到大于5的元素" << endl;
    } else {
        cout << "找到大于5的元素：" << *it << endl;
    }
}

void test02() {
    vector<Person> v;
    Person p1("a", 10);
    Person p2("b", 20);
    Person p3("c", 30);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());

    if (it == v.end()) {
        cout << "没有找到年龄大于20的元素" << endl;
    } else {
        cout << "找到年龄大于20的元素：" << it->m_Name << endl;
    }
}

int main() {
    test01();
    test02();
    return 0;
}
