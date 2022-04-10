//
//  QueueL.cpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
//

#include "QueueL.hpp"
#include <iostream>
queueL::queueL(){
    qL = {};
    x = 0;
}

void queueL::push(int x){
    qL.push_back(x);
}

void queueL::print(){
    auto temp = qL.begin();
    for(int i = 0; i < qL.size(); i++){
        advance(temp, i);
        cout << *temp << endl;
        temp = qL.begin();
    }
}

int queueL::pop(){
    if(qL.size() > 0){
        int temp = qL.front();
        qL.pop_front();
        return temp;
    }else{
        cout << "No elements to pop" << endl;
        return 0;
    }
}

int queueL::size(){
    return qL.size();
}

bool queueL::empty(){
    return qL.empty();
}



