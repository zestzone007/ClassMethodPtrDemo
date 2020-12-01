#include <iostream>
#include "A.h"
using namespace std;
int main() {
    NONSTATICFUNCPTR funcPtr = &A::NonStaticFunc;
    A a;
    (a.*funcPtr)(10); //通过对象调用
    A *aPtr = new A;

    (aPtr->*funcPtr)(10); //通过指针调用

    NONSTATICDATAPTR dataPtr = &A::nonStaticMember;
    A a1{11};
    cout<<a1.*dataPtr<<endl;//通过对象引用
    A *a1Ptr = new A(100);
    cout<<a1Ptr->*dataPtr<<endl;//通过指针引用

    STATICDATAPTR  staticDataPtr = &A::StaticMember;
    cout<<*staticDataPtr<<endl;

    STATICFUNCPTR staticFuncPtr = &A::StaticFunc;
    cout<<(*staticFuncPtr)();
    return 0;
}
