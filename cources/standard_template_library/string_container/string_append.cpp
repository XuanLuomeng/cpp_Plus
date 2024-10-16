//
// Created by Luojiawei on 24-10-16.
//


#include "iostream"
using namespace std;

/*
 * 测试append()函数
 * string& operator+=(const char c);
 * string& operator+=(const char* str);
 * string& operator+=(const string& str);
 * string& append(const char* str);
 * 将字符串前n个拼接到尾部
 * string& append(const char* str, int n);
 * 将字符串拼接到尾部
 * string& append(const string& str);
 * 从ops开始的n个字符连接到字符串尾部
 * string& append(const string& str, int pos, int n);
 */

void test01() {
    string str1 = "hello ";
    str1 += "world";
    cout<< "str1 = " << str1 << endl;
    str1 += '!';

    string str2 = "timi";
    cout<< "str2 = " << str2 << endl;
    str1+= str2;

    cout<< "str1 = " << str1 << endl;

    string str3 = "I";
    str3.append(" love ");
    cout<< "str3 = " << str3 << endl;

    str3.append("game abcde",4);
    cout<< "str3 = " << str3 << endl;

    str3.append(str2,1,2);
    cout<< "str3 = " << str3 << endl;
}

int main() {

    test01();

    return 0;
}