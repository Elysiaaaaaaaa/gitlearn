//
// Created by elysia on 2023/5/20.
//

#include "testclass.h"
void testclass::ad() {
    c++;
}
void testclass::print() {
    cout<<a<<b<<endl;
}
testclass::testclass(int a,int b):a(a),b(b){
    cout<<"����"<<endl;
}
testclass::~testclass() {
    cout<<"����"<<endl;
}
testclass::testclass(const testclass  &t) {
    this->a=t.a;
    this->b=t.b;
    cout<<"����"<<endl;
}

testclass & testclass::operator=(const testclass &t){
    this->a=t.a;
    this->b=t.b;
    cout<<"="<<endl;
    return *this;
}
