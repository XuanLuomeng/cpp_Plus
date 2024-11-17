//
// Created by Luojiawei on 24-11-14.
//


#include <map>
#include <vector>
#include "iostream"
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Employee {
public:
    string m_Name;
    int m_Salary;
};

void createWorker(vector<Employee> &v) {
    string nameSeed = "ABCDEFGHJI";

    for (int i = 0; i < 10; ++i) {
        Employee emp;
        emp.m_Name = "员工";
        emp.m_Name += nameSeed[i];

        emp.m_Salary = rand() % 10000 + 10000;

        v.push_back(emp);
    }
}

void setGroup(vector<Employee> &v, multimap<int, Employee> &e) {
    for (vector<Employee>::iterator it = v.begin(); it != v.end(); it++) {
        //产生随即部门编号
        int deptId = rand() % 3;

        //将员工插入到分组中
        e.insert(make_pair(deptId, *it));
    }
}

void showEmployeeByGroup(multimap<int, Employee> &m) {
    cout << "策划部门员工：" << endl;

    multimap<int, Employee>::iterator pos = m.find(CEHUA);

    int count = m.count(CEHUA);
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++) {
        cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
    }

    cout << "---------------------------------------------------------------------------------------------------------" << endl;
    cout << "美术部门员工：" << endl;
    pos = m.find(MEISHU);
    count = m.count(MEISHU);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++) {
        cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
    }
    cout << "---------------------------------------------------------------------------------------------------------" << endl;
    cout << "研发部门员工：" << endl;
    pos = m.find(YANFA);
    count = m.count(YANFA);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++) {
        cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
    }
}

int main() {
    //创建员工
    vector<Employee> vEmp;
    createWorker(vEmp);

    //员工分组
    multimap<int, Employee> mEmployee;
    setGroup(vEmp, mEmployee);

    showEmployeeByGroup(mEmployee);

    // //测试遍历
    // for (vector<Employee>::iterator it = vEmp.begin(); it != vEmp.end(); it++) {
    //     cout << "姓名：" << it->m_Name << " 工资：" << it->m_Salary << endl;
    // }


    return 0;
}
