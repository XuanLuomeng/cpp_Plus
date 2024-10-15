//
// Created by Luojiawei on 24-10-14.
//


#include "iostream"
using namespace std;

/**
 * 类模板和函数模板的区别
 */

template<class NameType, class AgeType = int>
class Person {
public:
    Person(NameType name, AgeType age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson() {
        cout << this->m_Name << " " << this->m_Age << endl;
    }

    NameType m_Name;
    AgeType m_Age;
};

//1、类模板没有自动类型推导使用方式，只能用显示指定类型方式
void test01() {
    //Person p2("Tom", 20); //错误，没有自动类型推导
    Person<string, int> p1("Tom", 20);
    p1.showPerson();
}

//2、类模板在模板参数列表中可以有默认参数
void test02() {
    Person<string> p1("Tom", 20);
    p1.showPerson();
}

int main() {

    return 0;
}