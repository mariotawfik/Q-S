//
//  QueueA.cpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
//

#include "QueueA.hpp"
#include <iostream>

queueA::queueA(){
    qA = {};
    x = 0;
    cout << "Queue Array: 0 means empty" << endl << endl;
}

void queueA::push(int x){
    bool pushed = false;
    for(int i = 0; i < qA.max_size(); i++){
        if(qA[i] == 0 && pushed == false){
            qA[i] = x;
            pushed = true;
        }
    }
}

void queueA::print(){
    for(int i = 0; i < qA.max_size(); i++){
        cout << qA[i] << endl;
    }
}

int queueA::pop(){
    int removed = qA[0];
    int temp = 0;
    qA[0] = 0;
    for(int i = 0; i < qA.max_size(); i++){
        if((i+1 == qA.max_size()) || (i+1) == 0){
            temp = 0;
        }else{
            temp = qA[i+1];
        }
        qA[i] = temp;
    }
    return removed;
}

int queueA::size(){
    int j = 0;
    for(int i = 0; i < qA.max_size(); i++){
        if(qA[i] == 0){
            j++;
        }
    }
    return qA.max_size()-j;
}

bool queueA::empty(){
    bool empty = true;
        for(int i = 0; i < qA.max_size(); i++){
            if(qA[i] != 0){
                empty = false;
            }
        }
    return empty;
}
