//
// Created by Luojiawei on 24-10-14.
//


#include "iostream"
using namespace std;

//类模板成员函数类外实现
template<class T1,class T2>
class Person {
public:
    Person(T1 name,T2 age);

    void showPerson();

    T1 name;
    T2 age;
};

//构造函数的类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age) {
    this->name = name;
    this->age = age;
}

template<class T1,class T2>
void Person<T1,T2>::showPerson() {
    cout << "name : " << this->name << " age : " << this->age << endl;
}

void test() {
    Person<string,int> p("Luojiawei",18);
    p.showPerson();
}

int main() {

    test();

    return 0;
}