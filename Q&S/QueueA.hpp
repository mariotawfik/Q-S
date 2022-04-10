//
//  QueueA.hpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
//

#ifndef QueueA_hpp
#define QueueA_hpp

#include <stdio.h>
#include <array>
using namespace std;
class queueA{
private:
    int x;
    array<int,10> qA;
public:
    queueA();
    void push(int x);
    int pop();
    void print();
    bool empty();
    int size();
};
#endif /* QueueA_hpp */
