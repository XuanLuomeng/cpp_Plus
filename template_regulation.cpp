//
// Created by Luojiawei on 24-10-12.
//


#include "iostream"
using namespace std;

/**
 * 1、函数模板和普通函数都可以调用时，优先普通函数
 * 2、使用空模板参数列表 可以强制调用 函数模板
 * 3、函数模板可以发生函数重载
 * 4、如果函数模板有更好的匹配，则函数模板优先
 */

void myPrint(int a,int b) {
    cout << "myPrint(int a,int b)" << endl;
}

template<typename T>
void myPrint(T a,T b) {
    cout << "myPrint(T a,T b)" << endl;
}

void test01() {
    //优先普通函数
    myPrint(1,2);
    //加空参数列表<> 强制调用函数模板
    myPrint<>(1,2);
    //函数模板可以发生函数重载
    myPrint('a','b');
}

int main() {

    test01();

    system("pause");

    return 0;
}