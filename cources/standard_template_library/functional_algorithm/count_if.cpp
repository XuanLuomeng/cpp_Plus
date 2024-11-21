//
// Created by Luojiawei on 24-11-21.
//


#include "iostream"
using namespace std;
#include <vector>
#include <algorithm>

/*
 * 常用的查找算法 count_if 条件统计
 */

class Person {
public:
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class Greater20 {
public:
    bool operator()(int x) {
        return x > 20;
    }
};

class AgeGreater20 {
public:
    bool operator()(Person &p) {
        return p.m_Age > 20;
    }
};

//内置数据类型
void test01() {
    vector<int> v;

    v.push_back(10);
    v.push_back(0);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(30);

    int re = count_if(v.begin(), v.end(), Greater20());
    cout << "count_if: " << re << endl;
}

//自定义数据类型
void test02() {
    vector<Person> v;
    v.push_back(Person("xiaoming", 10));
    v.push_back(Person("xiaohong", 30));
    v.push_back(Person("xiaogang", 20));
    v.push_back(Person("xiaofang", 50));
    v.push_back(Person("xiaoxiao", 40));

    int re = count_if(v.begin(), v.end(), AgeGreater20());
    cout << "count_if: " << re << endl;
}

int main() {
    // test01();
    test02();
    return 0;
}
