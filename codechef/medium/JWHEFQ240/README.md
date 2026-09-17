# JWHEFQ240

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T12:27:36.914Z  

```c_cpp
#define MAX_SIZE 101
int a[MAX_SIZE];
int top = -1;

void push(int ele){
    if(top <= MAX_SIZE - 1){ // Remove __ and complete the push function
        a[++top] =  ele;
        cout<<"Pushed: "<<ele<<"\n";
    }
    else{
        cout<<"Stack is full. Cannot push: "<<ele<<"\n";
    }
}

int pop(){
    if(top >= 0){
        int ele = a[top--];
        ele; // Remove __ and complete the pop function
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