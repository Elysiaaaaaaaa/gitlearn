#include <iostream>
#include "testclass.h"
#include "Myhead.h"
#include"namespace.h"
using namespace std;
using namespace MOTH;
namespace M=MOTH;//Æğ±ğÃû
int c=3;
int main() {

    testclass t1(2,3);
    cout<<endl;
    testclass t2(t1);
    cout<<endl;
    testclass t3;
    cout<<endl;
    t3=testclass(t2);
    cout<<endl;
    testclass t5 = testclass(t3);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    testclass t[3]={testclass(1,3),testclass(2,4),};

    cout<<"hello world";

    system("pause");

    return 0;
}

