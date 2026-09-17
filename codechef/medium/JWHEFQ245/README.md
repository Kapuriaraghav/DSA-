# JWHEFQ245

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Implement Stack using Arrays

Here's a simple exercise that involves implementing a stack.
In this exercise, you'll implement a basic stack to reverse a string using the stack's LIFO property.

### Task

Update the functions `push()` and `pop()` within the class stack to output the reverses string.

### Sample 1:
Input
Output

```
Hello, World!
```

```
!dlroW,olleH
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T19:19:33.026Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

#define STACK_MAX_SIZE 101
char stackArray[STACK_MAX_SIZE];
int stackTop = -1;

bool isStackEmpty() {
    return stackTop == -1;
}

bool isStackFull() {
    return stackTop >= STACK_MAX_SIZE - 1;
}

void pushToStack(char element) {
    // If stack is full (check using isFull function)
    // Then print "Stack is full"
    // Otherwise add the next element at top + 1 and update top
    if(isStackFull()){
        cout<<"Stack is full"<<endl;
    }
    else{
        stackTop++;
        stackArray[stackTop]=element;
    }
}

char popFromStack() {
    // If the stack is empty (check using isEmpty function)
    // Then print "Stack is empty" and return '-1'
    // Otherwise return the element at the top
    // But reduce top before returning the element
    if(isStackEmpty()){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else{
        char element=stackArray[stackTop];
        stackTop--;
        return element;
        
    }
}

int main() {
    string inputString = "Hello, World!";
    int inputLength = inputString.length();

    // Push each character onto the stack
    for (int i = 0; i < inputLength; i++) {
        char currentChar = inputString[i];
        pushToStack(currentChar);
    }

    // Pop the characters from the stack to construct the reversed string
    string reversedString;
    while (!isStackEmpty()) {
        reversedString.push_back(popFromStack());
    }
    cout << reversedString << "\n";
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ245)