//
// Created by Luojiawei on 24-10-14.
//


#include "iostream"
using namespace std;

/**
 * 类模板中成员函数创建时机
 * 类模板中成员函数在调用时才去创建
 */

class Person1 {
public:
    void showPerson1() {
        cout << "Person1 showPerson1" << endl;
    }
};

class Person2 {
public:
    void showPerson2() {
        cout << "Person2 showPerson2" << endl;
    }
};

template <class T>
class MyClass {
public:
    T obj;

    //类模板中的成员函数
    void func1() {
        obj.showPerson1();
    }

    void func2() {
        obj.showPerson2();
    }

    template <class U>
    U show(U &u) {
        obj.showPerson1();
        return u;
    }
};

void test01() {
    MyClass<Person1> my;
    //func1可行，func2不可行
    my.func1();
    // my.func2();
}

int main() {

    test01();

    return 0;
}