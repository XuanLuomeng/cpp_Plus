//
// Created by Luojiawei on 24-11-15.
//


#include "iostream"
using namespace std;

//函数对象 （仿函数）
/*
 * 函数对象在使用时，可以像普通函数那样调用，也可以使用函数指针或函数引用来调用。
 * 函数对象可以有自己的状态。
 * 函数对象可以作为参数传递
 */

class MyAdd {
public:
    int operator()(int v1, int v2) {
        return v1 + v2;
    }
};

void test01() {
    MyAdd add;
    cout << add(10, 20) << endl;
}

class MyPrint {
public:
    MyPrint() {
        this->count = 0;
    }
    void operator()(string test) {
        cout << test << endl;
        count++;
    }
    int count;
};

void test02() {
    MyPrint print;
    print("hello world");
}

void doPrint(MyPrint &p, string test) {
    p(test);
}

void test03() {
    MyPrint my_print;
    doPrint(my_print, "hello cpp");
}
int main() {

    test01();

    cout << "=====================" << endl;

    test02();

    cout << "=====================" << endl;

    test03();

    return 0;
}