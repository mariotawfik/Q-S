//
//  StackL.cpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
//

#include "StackL.hpp"

//
//  QueueL.cpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
#include <iostream>
stackL::stackL(){
    sL = {};
    x = 0;
}

void stackL::push(int x){
    sL.push_back(x);
}

void stackL::print(){
    auto temp = sL.begin();
    for(int i = 0; i < sL.size(); i++){
        advance(temp, i);
        cout << *temp << endl;
        temp = sL.begin();
    }
}

int stackL::pop(){
    int temp = sL.back();
    sL.pop_back();
    return temp;
}

int stackL::size(){
    return sL.size();
}

bool stackL::empty(){
    return sL.empty();
}



