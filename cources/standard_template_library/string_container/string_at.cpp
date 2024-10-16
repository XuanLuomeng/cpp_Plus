//
// Created by Luojiawei on 24-10-16.
//


#include "iostream"
using namespace std;

//字符存取
void test01() {
    string str = "hello world";
    cout << "str = " << str << endl;

    cout << "str[i] = ";

    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    cout << "str.at(i) = ";

    for (int i = 0; i < str.size(); i++) {
        cout << str.at(i) << " ";
    }
    cout << endl;
}

int main() {
    test01();

    return 0;
}
