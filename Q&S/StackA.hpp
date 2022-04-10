//
//  StackA.hpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
//

#ifndef StackA_hpp
#define StackA_hpp

#include <stdio.h>
#include <array>
#include <iostream>
using namespace std;
class stackA{
private:
    int x;
    array<int,10> sA;
public:
    stackA();
    void push(int x);
    int pop();
    void print();
    bool empty();
    int size();
};
#endif /* StackA_hpp */
