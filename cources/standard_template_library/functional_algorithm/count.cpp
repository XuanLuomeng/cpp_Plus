//
// Created by Luojiawei on 24-11-21.
//


#include "iostream"
using namespace std;
#include <vector>
#include <algorithm>

/*
 * 常用查找算法 count统计
 */

class Person {
public:
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    bool operator==(const Person &p) {
        if (this->m_Age == p.m_Age) {
            return true;
        }
        return false;
    }

    string m_Name;
    int m_Age;
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    int num = count(v.begin(), v.end(), 5);
    cout << "5 count num = " << num << endl;
}

void test02() {
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person p5("bbb", 20);

    int num = count(v.begin(), v.end(), p5);
    cout << "p5 count num = " << num << endl;
}

int main() {
    // test01();
    test02();
    return 0;
}
