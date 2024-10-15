//
// Created by Luojiawei on 24-10-14.
//


#include "iostream"
using namespace std;

/**
 * 类模板与继承
 */

template<class T>
class Base {
    T m;
};

//子类继承模板父类，必须知道T的类型才可以继承
class Son : public Base<int> {
};

void test01() {
    Son s;
}

//子类也想灵活指定父类中T的类型，子类也必须变成类模板
template<class T1, class T2>
class Son2 : public Base<T2> {
public:
    Son2() {
        cout << typeid(T1).name() << endl;
        cout << typeid(T2).name() << endl;
    }

    T1 obj;
};

void test02() {
    Son2<char, int> s2;
}

int main() {
    // test01();

    test02();
    return 0;
}
