//
// Created by Luojiawei on 24-11-13.
//


#include "iostream"
using namespace std;
#include "list"

class Person {
public:
    Person(const string &name, const int age, const int height) {
        this->name = name;
        this->age = age;
        this->height = height;
    }

    string name;
    int age;
    int height;
};

//设计排序规则
bool compare_age(Person &p1, Person &p2) {
    if (p1.age == p2.age) {
        return p1.height > p2.height;
    }
    return p1.age < p2.age;
}

void test01() {
    list<Person> L;
    L.push_back(Person("A", 31, 170));
    L.push_back(Person("B", 52, 177));
    L.push_back(Person("C", 24, 167));
    L.push_back(Person("D", 31, 177));
    L.push_back(Person("E", 45, 157));

    for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
        cout << "姓名：" << (*it).name << " 年龄：" << (*it).age << " 身高：" << (*it).height << endl;
    }

    cout << "按年龄升序：" << endl;
    L.sort(compare_age);

    for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
        cout << "姓名：" << (*it).name << " 年龄：" << (*it).age << " 身高：" << (*it).height << endl;
    }
}

int main() {

    test01();

    return 0;
}