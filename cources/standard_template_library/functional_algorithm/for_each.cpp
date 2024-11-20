//
// Created by Luojiawei on 24-11-17.
//


#include "iostream"
using namespace std;
#include "algorithm"
#include "vector"

//常用遍历算法 for_each

class MyPrint {
public:
    void operator()(int val) const{
        cout << val << " ";
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    //第一种
    for_each(v.begin(), v.end(), [](int val){
        cout << val << " ";
    });
    cout << endl;

    //第二种
    for_each(v.begin(), v.end(), MyPrint());
}

int main() {

    test01();

    return 0;
}