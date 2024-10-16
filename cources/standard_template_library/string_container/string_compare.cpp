//
// Created by Luojiawei on 24-10-16.
//


#include "iostream"
using namespace std;

//字符串比较

void test01() {
    string str1 = "abc";
    string str2 = "abc";

    //string.compare()结果为0则表示相等
    int res = str1.compare(str2);

    cout << res << endl;
}

int main() {

    test01();

    return 0;
}
