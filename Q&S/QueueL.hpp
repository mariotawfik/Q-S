//
//  QueueL.hpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
//

#ifndef QueueL_hpp
#define QueueL_hpp

#include <stdio.h>
#include <list>
using namespace std;

class queueL{
private:
    int x;
    list<int> qL;
public:
    queueL();
    void push(int x);
    int pop();
    void print();
    bool empty();
    int size();
};


#endif /* QueueL_hpp */
