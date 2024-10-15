//
// Created by Luojiawei on 24-10-14.
//


#include "iostream"
using namespace std;

//让编译器提前知道有这么一个模板类
template<class T1,class T2>
class Person;

//类外实现
template<class T1, class T2>
void printPerson2(Person<T1,T2> p) {
    cout << p.mName << " " << p.mAge << endl;
}

template<class T1, class T2>
class Person {
    //全局函数 类内实现
    friend void printPerson(Person<T1,T2> p) {
        cout << p.mName << " " << p.mAge << endl;
    }
    //全局函数 类外实现 需要添加空模板参数列表
    //如果全局函数 是类外实现，需要让编译器提前知道模板参数
    friend  void printPerson2<>(Person<T1,T2> p);

public:
    Person(T1 name, T2 age) {
        this->mName = name;
        this->mAge = age;
    }
private:
    T1 mName;
    T2 mAge;
};

//1.全局函数在类内实现
void test01() {
    Person<string, int>p("Luojiawei", 18);
    printPerson(p);
}

//2.全局函数在类外实现
void test02() {
    Person<string, int>p("Luojiawei", 18);
    printPerson2(p);
}

int main() {
    // test01();
    test02();
    return 0;
}
