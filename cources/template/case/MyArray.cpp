//
// Created by Luojiawei on 24-10-15.
//


#include "iostream"
using namespace std;
#include "MyArray.hpp"

void printIntArray(MyArray<int> &arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01() {
    //构造测试
    // MyArray<int> arr1(10);
    //
    // MyArray<int> arr2(arr1);
    //
    // MyArray<int> arr3(20);
    // arr3 = arr1;

    //插入测试
    MyArray<int> arr(10);
    for (int i = 0; i < 10; i++) {
        arr.Push_Back(i);
    }
    printIntArray(arr);

    cout << "arr的容量:" << arr.getCapacity() << endl;
    cout << "arr的元素个数:" << arr.getSize() << endl;

    MyArray<int> arr2(arr);

    printIntArray(arr2);
    //尾删法
    arr2.Pop_Back();
    printIntArray(arr2);
    cout << "arr2的容量:" << arr2.getCapacity() << endl;
    cout << "arr2的元素个数:" << arr2.getSize() << endl;

    arr2.Push_Back(100);

    printIntArray(arr2);
    cout << "arr2的容量:" << arr2.getCapacity() << endl;
    cout << "arr2的元素个数:" << arr2.getSize() << endl;
}

class Person {
public:
    Person() {
        this->age = 0;
        this->name = "";
    }
    Person(int age, string name) {
        this->age = age;
        this->name = name;
    }

    int age;
    string name;
};

void printPersonArray(MyArray<Person> &arr) {
        for (int i = 0; i < arr.getSize(); i++) {
        cout << "name : " << arr[i].name << " age : " << arr[i].age << endl;
    }
}

void test02() {
    MyArray<Person> arr(10);
    Person p1(10, "A");
    Person p2(20, "B");
    Person p3(30, "C");
    Person p4(40, "D");

    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);

    //输出数组
    printPersonArray(arr);
    //输出容量和大小
    cout << "arr的容量:" << arr.getCapacity() << endl;
    cout << "arr的元素个数:" << arr.getSize() << endl;
}

int main() {

    // test01();

    test02();

    return 0;
}
