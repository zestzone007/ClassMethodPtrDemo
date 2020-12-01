//
// Created by Administrator on 2020/12/1.
//

#ifndef CLASSMETHODPTRDEMO_A_H
#define CLASSMETHODPTRDEMO_A_H
class A;
typedef void (A::*NONSTATICFUNCPTR)(int);

typedef int (A::*NONSTATICDATAPTR);

typedef const int *STATICDATAPTR;
typedef int (*STATICFUNCPTR)();//跟普通函数指针是一样的
class A {
public:
    static  int StaticMember;
    static int StaticFunc(){
        return StaticMember;
    }

    int nonStaticMember;
    A();
    A(int a);
    void NonStaticFunc(int arg);

};




#endif //CLASSMETHODPTRDEMO_A_H
