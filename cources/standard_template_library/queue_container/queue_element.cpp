//
// Created by Luojiawei on 24-11-13.
//


#include "iostream"
using namespace std;
#include "queue"

//queue

void test01() {
    queue<int> q;

    for (int i = 0; i < 5; i++) {
        q.push(i);
    }

    cout << "队列大小为：" << q.size() << endl;
    cout << "队列首个元素：" << q.front() << endl;
    cout << "队列末尾元素：" << q.back() << endl;
    cout << "队列是否为空：" << q.empty() << endl;

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "队列大小为：" << q.size() << endl;
    //首个元素会因pop而变化
    cout << "队列首个元素：" << q.front() << endl;
    //末尾元素不会因pop而变化，即使该队列size为0，但该元素仍然存在
    cout << "队列末尾元素：" << q.back() << endl;
    cout << "队列是否为空：" << q.empty() << endl;
}

int main() {

    test01();

    return 0;
}