#include "Stack.h"
#include <iostream>

Stack::Stack() {
    topIndex = -1;
}

void Stack::push(int value) {
    if (isFull()) {
        std::cerr << "Stack is full, cannot push " << value << std::endl;
        return;
    }
    topIndex = topIndex + 1;
    data[topIndex] = value;
}

int Stack::pop() {
    if (isEmpty()) {
        std::cerr << "Stack is empty, cannot pop" << std::endl;
        return -1;
    }
    int poppedValue = data[topIndex];   // grab it before the marker moves
    topIndex = topIndex - 1;          // move the marker DOWN by one
    return poppedValue;                 // hand back what you grabbed
}

int Stack::peek() const {
    if (isEmpty()) {
        std::cerr << "Stack is empty, cannot peek" << std::endl;
        return -1;
    }
    return data[topIndex];
}

bool Stack::isEmpty() const {
    return topIndex == -1;
}

bool Stack::isFull() const {
    return topIndex == 99;
}

int Stack::size() const {
    return topIndex + 1;
}
