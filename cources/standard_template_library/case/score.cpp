//
// Created by Luojiawei on 24-10-20.
//


#include <vector>

#include "iostream"
using namespace std;

class Person {
public:
    Person(string name,int score) {
        this->name = name;
        this->score = score;
    }

    string name;
    int score;
};

void createPerson(vector<Person> &persons) {
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++) {
        string name = "选手";
        name += nameSeed[i];

        int score = 0;
        Person person(name,score);

        persons.push_back(person);
    }
}

void setScore(vector<Person> &persons) {
    for (vector<Person>::iterator it = persons.begin(); it != persons.end(); it++) {
        //动态获取打分        实际最优要求多个评委给分然后去掉最高与最低分再取平均分
        int score = 0;
        cout << "打分成绩" << (*it).name << ":";
        cin >> score;

        //更新打分
        (*it).score = score;
    }
}

void showScore(const vector<Person> &persons) {
    for (vector<Person>::const_iterator it = persons.begin(); it != persons.end(); it++) {
        cout << "选手" << (*it).name << "得分" << (*it).score << endl;
    }
}

int main() {
    //创建5名选手
    vector<Person> persons;
    createPerson(persons);

    //给选手打分
    setScore(persons);

    // //测试
    // for (vector<Person>::iterator it = persons.begin(); it != persons.end(); it++) {
    //     cout << "选手" << (*it).name << "得分" << (*it).score << endl;
    // }

    //显示得分
    showScore(persons);

    return 0;
}