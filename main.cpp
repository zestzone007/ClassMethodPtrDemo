#include <iostream>
#include "A.h"
int main() {
    NONSTATICFUNCPTR funcPtr = &A::NonStaticFunc;
    A a;
    (a.*funcPtr)(10); //通过对象调用
    A *aPtr = new A;
    (aPtr->*funcPtr)(10); //通过指针调用
    return 0;
}
