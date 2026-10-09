# RTLL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Reverse a Linked List

The Chef gives you a singly linked list $A$ integers and ask you to help him reverse the list.

Complete the function "listReverse" in the code snippet that takes a single argument: head of the linked list.

### Input Format
- The first line contains an integer $N$ - representing the number of elements of the linked list.
- The second line contains $N$ integers - representing the elements of the linked list.
### Output Format

For each testcase, output will be in a single line containing a list returned by the function listReverse.

### Constraints
- $1 \leq N \leq 10^5$
- $-10^9 \leq$ Node->value $\leq 10^9$
### Sample 1:
Input
Output

```
5
1 2 3 4 5
```

```
5 4 3 2 1
```

### Sample 2:
Input
Output

```
5
1 1 3 2 1
```

```
1 2 3 1 1
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T08:01:48.499Z  

```c_cpp
/*struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};*/

Node* listReverse(Node* head) {
    Node* next=head;
    Node* curr=head;
    Node* prev=NULL;
    
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    // 
    return prev;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/RTLL)