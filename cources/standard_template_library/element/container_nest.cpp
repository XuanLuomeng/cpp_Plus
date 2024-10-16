//
// Created by Luojiawei on 24-10-16.
//


#include <vector>

#include "iostream"
using namespace std;

//容器嵌套容器
void test01() {
    //创建一级容器
    vector<vector<int>> v;

    //创建二级容器
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int> v2;
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(300);

    //将二级容器放入一级容器
    v.push_back(v1);
    v.push_back(v2);

    //遍历
    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
        //*it 是二级容器
        for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
            cout << *vit << " ";
        }
        cout << endl;
    }
}

int main() {

    test01();

    return 0;
}