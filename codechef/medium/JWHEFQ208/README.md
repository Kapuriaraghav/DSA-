# JWHEFQ208

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Insertion in Linked List

Let's learn about inserting new elements at the beginning of a linked list.

Now, suppose we have a linked list `1 -> 2 -> 3` and we want to insert 4 at the beginning. We can then follow these steps:

- Create a new node with value 4. Let's call it newNode
- Add the head of the existing linked list as the next of newNode.
- Then set the head variable to the newNode, as the newNode is our new head.
### Implementation

To implement insertion operation, we have to create a new class  **LinkedList**  and create a new method  **insertFront**  in it.

We have also added  **getHeadValue**  to get the value at head after insertion.

Read and understand the code and then submit to see what it does.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T07:59:34.047Z  

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
    
    void insertFront(int value) {
        cout << "Inserting " << value << '\n';
        
        // Step 1: Create a new Node
        Node* newNode = new Node(value);
        
        // Step 2: Set next of newNode to the current head
        newNode -> next = head;
        
        // Step 3: Set newNode as the head
        head = newNode;
    }
    
    int getHeadValue() {
        if (head == NULL) {
            return -1;
        } else {
            return head -> value;
        }
    }
};

int main() {
    LinkedList* list = new LinkedList();
    list -> insertFront(3);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    
    list -> insertFront(2);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ208)