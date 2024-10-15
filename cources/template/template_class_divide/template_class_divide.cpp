//
// Created by Luojiawei on 24-10-14.
//


#include "iostream"
using namespace std;

//第一种解决方案，直接包含源文件
// #include "person.cpp"

//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
#include "../headers/person.hpp"

// template<class T1, class T2>
// class Person {
// public:
//     Person(T1 name, T2 age);
//
//     void showPerson();
//
//     T1 m_Name;
//     T2 m_Age;
// };

// template<class T1, class T2>
// Person<T1, T2>::Person(T1 name, T2 age) {
//     this->m_Name = name;
//     this->m_Age = age;
// }
//
// template<class T1, class T2>
// void Person<T1, T2>::showPerson() {
//     cout << "name : " << this->m_Name << " age : " << this->m_Age << endl;
// }

void test01() {
    Person<string, int> p("Tom", 20);
    p.showPerson();
}

int main() {

    test01();

    return 0;
}
