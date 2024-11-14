//
// Created by Luojiawei on 24-11-13.
//


#include "iostream"
using namespace std;
#include "list"

//list 插入和删除

void printList(const list<int> &L) {
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    list<int> L;

    //尾插
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    //头插
    L.push_front(100);
    L.push_front(200);
    L.push_front(300);
    printList(L);

    //尾删
    L.pop_back();
    printList(L);
    //头删
    L.pop_front();
    printList(L);

    //insert插入(在迭代器指定位置进行插入)
    list<int>::iterator it = L.begin();
    L.insert(++it, 1000);
    printList(L);

    //删除
    L.erase(L.begin());
    printList(L);

    //移除
    L.remove(10);
    printList(L);
}

int main() {

    test01();

    return 0;
}