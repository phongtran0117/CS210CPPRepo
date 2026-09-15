// TASK 03 -- Stack ADT (Assignment A2)
//
// Declarations only. Every function body lives in Stack.cpp.
// Backing store is a fixed-size C array of 100 ints:
// no STL, no dynamic memory, no templates.

#pragma once

class Stack {
public:
    Stack();
    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
    bool isFull() const;
    int size() const;

private:
    int data[100];
    int topIndex;
};
