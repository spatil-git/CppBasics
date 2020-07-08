//
//  Stack.hpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/4/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <string>
using namespace std;

template <typename T>
class Stack {
private:
    T storage[100];
    int top = -1;
public:
    void push(T e) {
        ++top;
        storage[top] = e;
    }
    T pop() {
        T value = storage[top];
        --top;
        return value;
    }
};
// Template specialization:
template <>
class Stack<string> {
private:
    string storage[100];
    int top = -1;
public:
    void push(string e) {
        ++top;
        storage[top] = e;
    }
    string pop() {
        string value = storage[top];
        storage[top] = "";
        --top;
        return value;
    }
};
#endif /* Stack_hpp */
