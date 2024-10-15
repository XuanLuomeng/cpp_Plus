//
// Created by Luojiawei on 24-10-14.
//


#include "iostream"
using namespace std;

template<class NameType, class AgeType>
class Person {
public:
    Person(NameType name, AgeType age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson() {
        cout << this->m_Name << " " << this->m_Age << endl;
    }

    NameType m_Name;
    AgeType m_Age;
};

void test01() {
    Person<string, int> p1("Luojiawei", 18);
    p1.showPerson();
}

int main() {
    test01();
    return 0;
}
