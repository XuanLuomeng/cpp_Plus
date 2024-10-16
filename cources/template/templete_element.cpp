//
// Created by Luojiawei on 24-10-11.
//


#include "iostream"
using namespace std;

//函数模板
template<typename T>    //声明模板，后面代码的T为通用数据类型
void mySwap(T &a,T &b) {
    T temp = a;
    a = b;
    b = temp;
}

//两个整型交换函数
void swapInt(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//交换两个浮点型函数
void swapFloat(float &a,float &b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "a = " << a << " b = " << b << endl;
    // mySwap<int>(a,b);    可以加<T>指定数据类型，也可以不加
    mySwap(a,b);
    cout << "a = " << a << " b = " << b << endl;

    cout << "--------------------------------------------------------------------------------" << endl;

    float c = 3.14;
    float d = 5.66;
    cout << "c = " << c << " d = " << d << endl;
    mySwap(c,d);
    cout << "c = " << c << " d = " << d << endl;

    return 0;
}