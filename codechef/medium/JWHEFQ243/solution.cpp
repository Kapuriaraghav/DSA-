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
