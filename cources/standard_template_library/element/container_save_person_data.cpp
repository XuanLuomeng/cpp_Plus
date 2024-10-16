//
// Created by Luojiawei on 24-10-16.
//


#include <algorithm>
#include <vector>

#include "iostream"
using namespace std;

//vector容器中存放自定义数据类型
class Person {
    public:
        Person(int age, string name) {
            this->m_Age = age;
            this->m_Name = name;
        }

        int m_Age;
        string m_Name;
};

void showPerson(Person &p);
void showPersonByAddress(Person *p);

void test01() {
    //创建容器
    vector<Person> v;
    //创建数据
    Person p1(10, "aaa");
    Person p2(20, "bbb");
    Person p3(30, "ccc");
    //将数据放入容器
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    //遍历数据
    // for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
    //     cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;
    // }

    for_each(v.begin(),v.end(),showPerson);
}

void test02() {
    vector<Person*> v;
    Person p1(10, "aaa");
    Person p2(20, "bbb");
    Person p3(30, "ccc");

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);

    for_each(v.begin(),v.end(),showPersonByAddress);
}

void showPerson(Person &p) {
    cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
}

void showPersonByAddress(Person *p) {
    cout << "姓名：" << p->m_Name << " 年龄：" << p->m_Age << endl;
}

int main() {

    // test01();

    test02();

    return 0;
}