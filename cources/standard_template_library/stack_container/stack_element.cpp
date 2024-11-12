//
// Created by Luojiawei on 24-11-13.
//


#include "iostream"
using namespace std;
#include "stack"

//stack

void test01() {
    stack<int> s;

    //入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "size : " << s.size() << endl;
    cout << "empty : " << s.empty() << endl;
    cout << "top : " << s.top() << endl;

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    cout << "size : " << s.size() << endl;
    cout << "empty : " << s.empty() << endl;
    //当前栈为空，访问栈顶元素会抛出异常
    // cout << "top : " << s.top() << endl;
}

int main() {

    test01();
    cout << endl;

    return 0;
}