# JWHEFQ224

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Practice - Josephus Problem

You need to solve the famous Josephus problem using circular linked list in this section.

There are `N` people standing in a circle like 1->2->3...->N->1 and there is a knife. Whoever has the knife kills the person next to them and hands over the knife, i.e., if `2` has the knife in 1->2->3->1 then `2` kills `3` and hands over the knife to `1`. This process continues until there is only one person left, i.e., there is no one left to kill. This last person is deemed as the winner. Initially the knife is with person `1`.

For a given `N`, you need to determine the winner.

Note - You are given a circular linked list containing elements from `1` to `N` with head initially at `1`. In the `solution` function, you need to output a single integer denoting the winner.
 **Do not make changes anywhere except the solveJosephus() function.** 

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases. The description of the test cases follows.
- The first and only line of each test case contains a single integer $N$, denoting the number of people
### Output Format

For each test case, output on a new line the winner of that game.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 10^5$
### Sample 1:
Input
Output

```
2
5
4
```

```
3
1
```

### Explanation:

For n=5, the moves are as followed (the person in bracket holds the knife):
(1)->2->3->4->5->1   (`1` kills `2` and hands knife to 3)
1->(3)->4->5->1   (`3` kills `4` and hands knife to 5)
1->3->(5)->1   (`5` kills `1` and hands knife to 3)
(3)->5   (`3` kills `5` and is the only person left)

Therefore, 3 is the winner.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T09:05:29.432Z  

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
        
        if (head == NULL) {
            head = newNode;
        } else {
            tail -> next = newNode;
        }
        
        // Set newNode as the tail 
        tail = newNode;
        
        // Set next of tail to head
        tail -> next = head;
    }
    
    int solveJosephus() {
        Node* knife=head;
        // Node* victim=knife->next;
        if(head==nullptr){
            return -1;
        }
        while(knife->next!=knife){
            Node* victim=knife->next;
            knife->next=victim->next;
            delete victim;
            knife=knife->next;
        }
        
        return knife->value;
        
    }
    
    
};

int main() {
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        
        LinkedList* list = new LinkedList();
        for (int i = 1; i <= n; i++) {
            list -> insertAtEnd(i);    
        }
        cout << list -> solveJosephus() << '\n'; 
    }
}
    
```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ224)