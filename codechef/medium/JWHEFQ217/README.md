# JWHEFQ217

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Delete from any position

Deletion from any position other than front is a little different.

For example, we have 1 -> 2 -> 3 and we want to remove 2.
For that, we have to point the next of 1 to 3 and delete 2.

### Video Explanation
### Task

Complete the function  **deleteNode**  to delete an element from any position.

### Constraints
- $1 \leq N \leq 1000$
- $2 \leq K \leq N$
- $-10^9 \leq Node Value \leq 10^9$
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
**Submitted:** 2026-10-09T08:55:49.323Z  

```c_cpp
#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr) {}
};

class LinkedList {
    public:
    Node* head;
    Node* tail;

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        
        // If there are no nodes in the linked list
        // Set the new node as head and return
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        
        // Set next of tail to the new Node
        tail -> next = newNode;
        
        // Set new Node as the new tail
        tail = newNode;
    }
    
void deleteNode(int value) {
    
    if (head -> value == value) {
        Node* targetNode = head;
        head = head -> next;
        delete targetNode;
    } else {
        Node* iter = head;
        
        // Traverse the list
        // When next element is our target element, eliminate it
        while (iter -> next != NULL) {
            if (iter -> next -> value == value) {
                // Set next of iter
                // To next to next of iter
                iter->next=iter->next->next;
                
                break;
            }
            iter = iter -> next;
        }
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
        list -> insertAtEnd(a);
    }
    
    list -> deleteNode(x);
    list -> printValues();
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ217)