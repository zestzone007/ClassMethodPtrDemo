//
// Created by Administrator on 2020/12/1.
//

#include "A.h"
#include<iostream>
using namespace std;
void A::NonStaticFunc(int arg) {
    nonStaticMember = arg;
    cout<<nonStaticMember<<endl;
}

int A::StaticMember = 1;
A::A() {
    nonStaticMember = 0;
}
A::A(int a ){
    nonStaticMember = a;
}