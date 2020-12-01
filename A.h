//
// Created by Administrator on 2020/12/1.
//

#ifndef CLASSMETHODPTRDEMO_A_H
#define CLASSMETHODPTRDEMO_A_H
#include<iostream>
class A {
public:
    void NonStaticFunc(int arg);
private:
    int nonStaticMember;
};

typedef void (A::*NONSTATICFUNCPTR)(int);


#endif //CLASSMETHODPTRDEMO_A_H
