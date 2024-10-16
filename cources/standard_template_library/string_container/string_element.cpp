//
// Created by Luojiawei on 24-10-16.
//


#include "iostream"
using namespace std;

//string构造函数
/*
 * 创建一个空字符串
 * string();
 * 使用字符串 ch 初始化
 * string(const char* ch);
 * 使用字符串 str 的子串 初始化
 * string(const string& str);
 * 使用 len 个 ch 初始化
 * string(int len, char ch);
 */

void test01() {
    string s1; // 默认构造

    const char * str = "hello world";
    string s2(str);

    cout << "s2 = " << s2 << endl;

    string s3(s2);
    cout << "s3 = " << s3 << endl;

    string s4(10, 'a');
    cout << "s4 = " << s4 << endl;
}

int main() {

    test01();

    return 0;
}