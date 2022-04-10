//
//  main.cpp
//  Q&S
//
//  Created by Mary Tamry on 07.04.22.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "StackL.hpp"
#include "StackA.hpp"
#include "QueueL.hpp"
#include "QueueA.hpp"

stackL sL;
stackA sA;
queueL qL;
queueA qA;

void printAll(){
    cout << "Stack List Printed:" << endl;
    sL.print();
    cout << endl << endl;
    cout << "Stack Array Printed:" << endl;
    sA.print();
    cout << endl << endl;
    cout << "Queue List Printed:" << endl;
    qL.print();
    cout << endl << endl;
    cout << "Queue Array Printed:" << endl;
    qA.print();
    cout << endl << endl;
}

int main() {
    
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        int num = rand()%1000;
        sL.push(num);
        sA.push(num);
        qL.push(num);
        qA.push(num);
    }
    
    printAll();
    
    for(int i = 0; i < 2; i++){
        sL.pop();
        sA.pop();
        qL.pop();
        qA.pop();
    }
    
    cout << endl << endl << "After two elements popped: " << endl << endl;
    printAll();
        cout << "Stack List Size:" << endl;
        cout << sL.size();
        cout << endl << endl;
        cout << "Stack Array Size:" << endl;
        cout << sA.size();
        cout << endl << endl;
        cout << "Queue List Size:" << endl;
        cout << qL.size();
        cout << endl << endl;
        cout << "Queue Array Size:" << endl;
        cout << qA.size();
        cout << endl << endl;
    
    cout << "If empty, program will show 1, if not it will show 0" << endl;
    cout << "Stack List empty?" << endl;
    cout << sL.empty();
    cout << endl << endl;
    cout << "Stack Array empty?" << endl;
    cout << sA.empty();
    cout << endl << endl;
    cout << "Queue List empty?" << endl;
    cout << qL.empty();
    cout << endl << endl;
    cout << "Queue Array empty?" << endl;
    cout << qA.empty();
    cout << endl << endl;
}

