//
// Created by Luojiawei on 24-10-16.
//


#include "iostream"
using namespace std;

//string赋值操作
/*
 * char*类型字符串 赋值给当前的字符串
 * string& operator=(const char* s);
 * 把字符串str赋给当前字符串
 * string& operator=(const string& str);
 * 字符赋值给当前的字符串
 * string& operator=(char c);
 * 把字符串s付给予当前字符串
 * string& assign(const char *c);
 * 把字符串s的前n个字符赋给当前的字符串
 * string& assign(const char *c, int n);
 * 把字符串s赋给当前字符串
 * string& assign(const string& str);
 * 用n个字符c赋给当前字符串
 * string& assign(int n, char c);
 */

void test01() {
    string str1;
    str1 = "hello world";
    cout << "str1 = " << str1 << endl;

    string str2;
    str2 = str1;
    cout << "str2 = " << str2 << endl;

    string str3;
    str3 = 'a';
    cout << "str3 = " << str3 << endl;

    string str4;
    str4.assign("hello world");
    cout << "str4 = " << str4 << endl;

    string str5;
    str5.assign("hello world", 5);
    cout << "str5 = " << str5 << endl;

    string str6;
    str6.assign(str5);
    cout << "str6 = " << str6 << endl;

    string str7;
    str7.assign(5, 'a');
    cout << "str7 = " << str7 << endl;
}

int main() {

    test01();

    return 0;
}