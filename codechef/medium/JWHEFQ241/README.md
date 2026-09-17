# JWHEFQ241

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Peek, isEmpty, isFull

The `peek`, `isEmpty`, and `isFull` are some other functions used in stacks.

- peek - This function allows you to look at the element at the top of the stack. It's a way to inspect the next item that would be removed if a pop operation were to be performed. For a stack: Peek would return the last item added (since stacks follow Last In, First Out order).
- isEmpty - This function checks whether a data structure (like a stack, queue, list, etc.) contains any elements or not. If the data structure contains no elements, isEmpty returns true. If there is at least one element in the data structure, isEmpty returns false.
- isFull - This function is typically relevant for a fixed size stack. It allows you to determine if the data structure has reached its maximum capacity.
### Task
- You are given implementation of peek,isEmpty and isFull function of stack
- Peek function return the element present in the peek of stack in case stack is empty it returns -1.
- isFull fuction return 1 if the stack is full and return 0, if the stack is not full.
- Fill the dash present in the function and submit the code.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T19:09:00.438Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 101
int a[MAX_SIZE];
int top = -1;

void push(int ele){
    if(top<=MAX_SIZE-1){
        a[++top]=ele;
        cout<<"Pushed: "<<ele<<"\n";
    }
    else{
        cout<<"Stack is full. Cannot push: "<<ele<<"\n";
    }
}

int pop(){
    if(top>=0){
        int ele = a[top];
        top--;
        cout<<"Popped: "<<ele<<"\n";
        return ele;
    }
    else{
        cout<<"Stack is empty. Cannot pop.\n";
        return '-1';
    }
}

int peek(){
    if(top >= 0){
        int ele = a[top];
        cout<<"Peeked: "<<ele<<"\n";
        return ele;
    }
    else{
        cout<<"Stack is empty. Cannot peek.\n";
        return '-1';
    }
}

int isEmpty(){
    return top == -1;
}

int isFull(){
    if(top >= MAX_SIZE){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    
    peek();
    
    pop();
    pop();
    pop();
    pop();
    
    peek();
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ241)