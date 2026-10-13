# JWHEFQ223

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Deletion - Doubly Linked List

In this section, we will learn how to do the deletion operation in a doubly linked list.

Let's suppose you need to delete the node `target` between node `A` and node `B`, the pointers we need to update are:

- next pointer of A
- prev pointer of B
- head pointer if target is the head

Complete the function delete(int val) where `val` denotes the value of the node to be deleted.

### Video Explanation

 ***Do not make changes anywhere else in the code except this function** *

### Constraints
- $1 \leq N \leq 1000$
- $-10^9 \leq Node Value \leq 10^9$
- All node values are distinct.
- The value to be deleted is guaranteed to be present in the linked list.
### Sample 1:
Input
Output

```
5 3
1 2 3 4 5
```

```
1 2 4 5
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T08:20:58.959Z  

```c_cpp
#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    Node* prev;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr), prev(nullptr) {}
};

class LinkedList {
    public:
    Node* head;

    void insertAtIndex(int index, int value) {
        Node* newNode = new Node(value);
        
        if (index == 0) {
            // To insert at head, make this new node the head
            newNode -> next = head;
            if (head != NULL) {
                head -> prev = newNode;
            }
            head = newNode;
        } else {
            // To insert at any other position
            // Find the nodes between which we want to insert
            // By traversing from head to index - 1 position
            Node *iter = head;
            for (int i = 0; i < index - 1; i++) {
                iter = iter -> next;
            }
            
            Node *A = iter;
            Node *B = iter -> next;
            
            // Update pointers to insert newNode between A and B
            A -> next = newNode;
            if (B != NULL) {
                B -> prev = newNode;
            }
            
            newNode -> next = B;
            newNode -> prev = A;
        }
    }

void deleteNode(int value) {
    Node* targetNode = head;
    while (targetNode -> value != value) {
        targetNode = targetNode -> next;
    }
    
    // Update A and B
    Node* A = targetNode -> prev;
    Node* B = targetNode -> next;
    
    // A could be null if target is head
    if (A != NULL) {
        A -> next = B;
    }
    
    // B could be null if target is tail
    if (B != NULL) {
        B -> prev = A;
    }
    
    if (targetNode == head) {
        head = NULL;
    }
}

    
    
    void printValues() {
        if (head == NULL) {
            return;
        } else {
            Node* current = head;
            while (current != NULL) {
                cout << current -> value << ' ';
                current = current -> next;
            }
            cout << '\n';
        }
    }

};

int main() {
    int n, x;
    cin >> n >> x;
    
    LinkedList* list = new LinkedList();
    
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        list -> insertAtIndex(i, a);
    }
    
    list -> deleteNode(x);
    list -> printValues();
}


```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ223)