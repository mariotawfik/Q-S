//
//  StackA.cpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
//

#include "StackA.hpp"
using namespace std;


stackA::stackA(){
    sA = {};
    x = 0;
    cout << "Stack Array: 0 means empty" << endl << endl;
}

void stackA::push(int x){
    bool pushed = false;
    for(int i = 0; i < sA.max_size(); i++){
        if(sA[i] == 0 && pushed == false){
            sA[i] = x;
            pushed = true;
        }
    }
}

void stackA::print(){
    for(int i = 0; i < sA.max_size(); i++){
        cout << sA[i] << endl;
    }
}

int stackA::pop(){
    int temp = 0;
    bool removed = false;
    for(int i = (sA.max_size()-1); i >= 0; i--){
        if(sA[i] != 0 && removed == false){
            temp = sA[i];
            sA[i] = 0;
            removed = true;
        }
    }
    return temp;
}

int stackA::size(){
    int j = 0;
    for(int i = 0; i < sA.max_size(); i++){
        if(sA[i] == 0){
            j++;
        }
    }
    return sA.max_size()-j;
}

bool stackA::empty(){
    bool empty = true;
        for(int i = 0; i < sA.max_size(); i++){
            if(sA[i] != 0){
                empty = false;
            }
        }
    return empty;
}
