# JWHEFQ141

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Binary Search

Complete the code for Binary Search to find the index of an element $K$ in the given array $A$. Output the index of the element of $K$, if $K$ is present in $A$, else output $-1$.

### Sample 1:
Input
Output

```
9 7 
1 3 6 7 10 13 20 25 27 

```

```
3
```

### Sample 2:
Input
Output

```
9 2
1 3 6 7 10 13 20 25 27 
```

```
-1
```

### Explanation:

$2$ does not exist in this array

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T11:22:55.540Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int k) {
    int left = 0, right = n-1;
    while (left <= right) {
        int middle = (left + right) / 2; 
        if (arr[middle]==k) {
            return middle;
        } else if (arr[middle] > k) {
            right=middle-1;
        } else {
            left = middle+1;
        }
    }
    return -1; // k not found
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << binary_search(arr, n, k) << endl;
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ141)