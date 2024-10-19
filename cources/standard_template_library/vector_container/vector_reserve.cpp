//
// Created by Luojiawei on 24-10-18.
//

#include <vector>
#include "iostream"
using namespace std;

/* vector预留空间
 * reserve(int len)
 * 容器预留空间
 * 当填充数据比较多的时候，减少vector在每次插入数据的时候，重新分配内存的次数，从而提高效率。
 */

void test01() {
    vector<int> v;
    for (int i = 0; i < 1000; ++i) {
        v.push_back(i);
    }

    cout << "capacity = " << v.capacity() << endl;

}

int main() {

    test01();

    return 0;
}
