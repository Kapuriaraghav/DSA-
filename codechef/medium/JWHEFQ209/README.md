# JWHEFQ209

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Linked List - Insertion at end

Insertion at end is fairly straightforward.

See the following steps:

- Make a new node with the desired value.
- Start at the head and move to the last node of the linked list.
- Insert the new node after the last node.

The only edge case is when there is no value in the linked list. In that case, we set the head of the linked list to the new node.

### Task

Complete the function  **insertAtEnd**  in IDE to insert an element at the end of a linked list. I have also added a new function  **getLastValue**  to print the last value of a linked list.

### Input Format

First line denotes 'n' the number of elements to be inserted in the list.
Second line consists of n space-separated integers denoting the elements to be added in the list.

### Output Format

The value at the end of the list after each insertion.

### Constraints
- $1 \leq N \leq 1000$
### Sample 1:
Input
Output

```
4
2 32 23 53
```

```
2 32 23 53
```

### Explanation:

Initially we have an empty linked list. After each step:

- 2
- 2->32
- 2->32->23
- 2->32->23->53

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T10:18:40.663Z  

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
    
    void insertAtEnd(int value) {
        // Create a new Node with inital value as value
        Node* newNode = new Node(value);
        Node* current = head;
        
        // If there are no nodes in the linked list
        // Set the new node as head and return
        if (head == NULL) {
            head = newNode;
            return;
        }
        
        // Iterate to the end of list
        while (current -> next != NULL) {
            current = current -> next;
        }
        
        // Set the next of last value to the new Node
        current -> next= newNode;
    }
    
    int getLastValue() {
        if (head == NULL) {
            return -1;
        } else {
            Node* current = head;
            while (current -> next != NULL) {
                current = current -> next;
            }
            return current -> value;
        }
    }
};

int main() {
    int n;
    cin >> n;
    
    LinkedList* list = new LinkedList();
    
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        list -> insertAtEnd(x);
        cout << list -> getLastValue() << ' ';
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ209)