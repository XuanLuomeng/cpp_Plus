//
// Created by Luojiawei on 24-10-14.
//


#include "iostream"
using namespace std;

/**
 * 类模板对象做函数参数
 */

template<class T1, class T2>
class Person {
    T1 name;
    T2 age;
public:
    Person(T1 name, T2 age) {
        this->name = name;
        this->age = age;
    }

    void showPerson() {
        cout << "name: " << name << " age: " << age << endl;
    }

    T1 getName() {
        return name;
    }

    T2 getAge() {
        return age;
    }
};

//1、指定传入参数
void printPerson1(Person<string, int> &p) {
    p.showPerson();
};

void test01() {
    Person<string, int> p("Luojiawei", 18);
    printPerson1(p);
}

//2、参数模板化
template<class T1,class T2>
void printPerson2(Person<T1,T2>&p) {
    p.showPerson();
}

void test02() {
    Person<string, int> p("Luojiawei", 18);
    printPerson2(p);
}

//3、整个类模板化
template<class T>
void printPerson3(T &p) {
    p.showPerson();
}

void test03() {
    Person<string, int> p("Luojiawei", 18);
    printPerson3(p);
}

int main() {

    // test01();


    // test02();

    test03();
    return 0;
}