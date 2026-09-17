# JWHEFQ240

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Simulate Push and Pop

Given some stack operation, Find what will be the resultant stack after the following operations.

### Operations
- Push 4
- Push 11
- Pop
- Push 14
- Pop
- Push 32

 **Note the stack will be read from left to right, the left most element will be your bottom most element of stack**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T19:05:10.324Z  

```cpp
#define MAX_SIZE 101
int a[MAX_SIZE];
int top = -1;

void push(int ele){
    if(top < MAX_SIZE - 1){ // Remove __ and complete the push function
        a[++top] =  ele;
        cout<<"Pushed: "<<ele<<"\n";
    }
    else{
        cout<<"Stack is full. Cannot push: "<<ele<<"\n";
    }
}

int pop(){
    if(top >= 0){
        int ele = a[top];
        top--; // Remove __ and complete the pop function
        cout<<"Popped: "<<ele<<"\n";
        return ele;
    }
    else{
        cout<<"Stack is empty. Cannot pop.\n";
        return '-1';
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ240)