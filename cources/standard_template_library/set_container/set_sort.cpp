//
// Created by Luojiawei on 24-11-14.
//


#include "iostream"
using namespace std;
#include "set"

// set 排序

class Person {
public:
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

class MyCompare {
public:
    bool operator()(int v1, int v2) const {
        return v1 > v2;
    }
};

class MyPersonCompare {
public:
    bool operator()(const Person &p1, const Person &p2) const {
        return p1.m_Age > p2.m_Age;
    }
};

void test01() {
    set<int> s1;

    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    s1.insert(50);

    for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    //指定排序规则为从大到小(需要用到仿函数)，对象在创建的时候就必须指定排序规则，后续无法修改排序规则
    set<int, MyCompare> s2;

    s2.insert(10);
    s2.insert(30);
    s2.insert(20);
    s2.insert(40);
    s2.insert(50);

    for (set<int>::iterator it = s2.begin(); it != s2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//指定自定义set类型的排序规则
void test02() {
    //自定义数据类型都必须指定排序规则
    set<Person, MyPersonCompare> s;

    //创建Person对象
    Person p1("Tom", 20);
    Person p2("Jerry", 30);
    Person p3("Mike", 25);
    Person p4("King", 26);

    //插入元素
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    for (set<Person>::iterator it = s.begin(); it != s.end(); it++) {
        cout << "name: " << it->m_Name << " age: " << it->m_Age << endl;
    }
    cout << endl;
}

int main() {
    // test01();

    test02();
    return 0;
}
