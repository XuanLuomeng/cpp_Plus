//
// Created by Luojiawei on 24-10-16.
//


#include "iostream"
using namespace std;

/*
 * 字符串的查找和替换
 * 顺序找
 * int find(const string& str, int pos = 0) const;
 * int find(const char* s, int pos = 0) const;
 * int find(const char* s, int pos, int n) const;
 * int find(char c, int pos = 0) const;
 * 逆序找
 * int rfind(const string& str, int pos = npos) const;
 * int rfind(const char* s, int pos = npos) const;
 * int rfind(const char* s, int pos, int n) const;
 * int rfind(char c, int pos = 0) const;
 * 替换
 * string replace(int pos, int len, const string& str);
 * string replace(int pos, int len, const char* s);
 */

void test01() {
    string str1 = "abcdefg";

    int pos = str1.find("de");

    if (pos == -1) {
        cout << "没有找到" << endl;
    } else {
        cout << "找到，位置是：" << pos << endl;
    }

    //rfind
    pos = str1.rfind("de");
    cout << "pos: " << pos << endl;
}

void test02() {
    string str1 = "abcdefg";

    string str2 = str1.replace(1, 3, "111");
    cout << str2 << endl;
}

int main() {
    test01();

    cout << "==================" << endl;

    test02();

    return 0;
}
