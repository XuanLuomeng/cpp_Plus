//
// Created by Luojiawei on 24-10-15.
//

#ifndef MYARRAY_HPP
#define MYARRAY_HPP

/**
 * 个人通用数组类
 */
#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
    //有参构造
    MyArray(int capacity) {
        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity];
    }

    //拷贝构造（需要深拷贝）
    MyArray(const MyArray &arr) {
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        //深拷贝
        this->pAddress = new T[arr.m_Capacity];
        for (int i = 0; i < arr.m_Size; ++i) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    //operator= 防止浅拷贝问题
    MyArray &operator=(const MyArray &arr) {
        //先判断原来堆区是否有数据，若有数据先释放
        if (this->pAddress != nullptr) {
            delete [] this->pAddress;
            this->pAddress = nullptr;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }
        //深拷贝
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];
        for (int i = 0; i < arr.m_Size; ++i) {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    //尾插法
    void Push_Back(const T &val) {
        //判断容量是否等于大小
        if (this->m_Capacity == this->m_Size) {
            return;
        }
        //在数组末尾插入元素
        this->pAddress[this->m_Size] = val;
        //更新数组大小
        this->m_Size++;
    }

    //尾删法
    void Pop_Back() {
        //让用户访问不到最后一个元素即为逻辑删除
        if(this->m_Size==0) {
            return;
        }
        this->m_Size--;
    }

    //通过下标方式访问数据
    T& operator[](int index) {
        return this->pAddress[index];
    }

    //返回数组容量
    int getCapacity() {
        return this->m_Capacity;
    }

    //返回数组大小
    int getSize() {
        return this->m_Size;
    }

    //析构函数
    ~MyArray() {
        if (pAddress != nullptr) {
            delete [] this->pAddress;
            pAddress = nullptr;
        }
    }

private:
    //指针指向堆区开辟的真是数组
    T *pAddress;
    //数组容量
    int m_Capacity;
    //数组大小
    int m_Size;
};

#endif //MYARRAY_HPP
