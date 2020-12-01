//
// Created by Administrator on 2020/12/1.
//

#include "A.h"
using namespace std;
void A::NonStaticFunc(int arg) {
    nonStaticMember = arg;
    cout<<nonStaticMember<<endl;
}