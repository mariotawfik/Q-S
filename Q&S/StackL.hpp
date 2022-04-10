//
//  StackL.hpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
//

#ifndef StackL_hpp
#define StackL_hpp

#include <stdio.h>
#include <list>
using namespace std;

class stackL{
private:
    int x;
    list<int> sL;
public:
    stackL();
    void push(int x);
    int pop();
    void print();
    bool empty();
    int size();
};
#endif /* StackL_hpp */
