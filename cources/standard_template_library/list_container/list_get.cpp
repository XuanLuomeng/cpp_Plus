//
// Created by Luojiawei on 24-11-13.
//


#include "iostream"
using namespace std;
#include "list"

// list 数据存储

/*
 * 检验容器迭代器是否
 */

void test01() {
    //list 是随机地址存储，所以不支持随机访问和直接访问中间部分数据，只能通过迭代器访问
    //list不支持 [] 和 at() 访问数据
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    // 获取第一个元素
    cout << "第一个元素为：" << l.front() << endl;

    // 获取最后一个元素
    cout << "最后一个元素为：" << l.back() << endl;
}

int main() {

    test01();

    return 0;
}