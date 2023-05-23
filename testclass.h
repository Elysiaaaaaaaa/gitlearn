//
// Created by elysia on 2023/5/20.
//

#ifndef UNTITLED_TESTCLASS_H
#define UNTITLED_TESTCLASS_H
#include<iostream>
using namespace std;
extern int c;
class testclass {
private:
    int a;
    int b;
public:
    testclass& operator=(const testclass &t);

    testclass(const testclass & t);
    testclass(int a=0,int b=0);
    ~testclass();
    void print();
    void ad();
};

#endif //UNTITLED_TESTCLASS_H
