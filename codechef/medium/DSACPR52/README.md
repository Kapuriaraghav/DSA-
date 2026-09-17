# DSACPR52

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### 2D Arrays

We can access elements from a 2D array with the same concept as an array.
Let's consider an array

```
       [ [1, 2, 3], 
Arr =    [4, 5, 6],
         [7, 8, 9] ]

```

This array has $3$ arrays as element. Each element can be accessed by it's corresponding index.
If we access the element at $0^{th}$ index by $Arr[0]$, we get the array $[1, 2, 3]$.
Now, if we want to access one of elements of this array, we can write the index we want from this array after $Arr[0]$. So, if we write $Arr[0][1]$, we get the element on index $1$ in the array $[1, 2, 3]$, which is $2$.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T03:24:09.026Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DSACPR52)