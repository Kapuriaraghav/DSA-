# FINDUP

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Find duplicate in a range

You are given an array  **A**  containing  **N + 1**  integers. Each integer is in the range  **1**  to  **N**  (inclusive).

Since there are  **N + 1**  elements but only  **N**  distinct possible values, at least one number appears more than once.

Your task is to  **find and print the duplicate number**.

 **Note:** 

- The input array must be treated as read-only.
- There is exactly one duplicate value, although it may appear more than twice.
### Input Format
- The first line contains a single integer T, denoting the number of test cases.
- For each test case: The first line contains a single integer N. The second line contains N + 1 space-separated integers representing the array A.
### Output Format

For each test case, print a single integer — the duplicate number.

### Constraints
- $1 \le T \le 10^5$
- $1 \le N \le 2 \times 10^5$
- $1 \le A_i \le N$
- Exactly one value is duplicated.
- The sum of N over all test cases does not exceed $2 \times 10^5$.
### Sample 1:
Input
Output

```
3
4
1 3 4 2 2
5
3 1 3 4 2 5
6
1 5 6 2 4 3 6
```

```
2
3
6
```

### Explanation:
### Test Case 1

The number  **2**  appears twice in the array, so the answer is  **2**.

### Test Case 2

The number  **3**  appears twice in the array, so the answer is  **3**.

### Test Case 3

The number  **6**  appears twice in the array, so the answer is  **6**.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-26T05:10:15.699Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;
int arr[200005];
int main() {
    // // your code goes here
    // int t;
    // cin >> t;
    // while (t--) {
    //      int n, value_dup = 0;
    //      cin >> n;
    //      int arr[n + 1];
    //      for (int i = 0; i < n + 1; i++) {
    //          cin >> arr[i];
    //      }

    //      int max_count = 0, current_count;
    //      for (int i = 0; i < n + 1; i++) {
    //          int current_count = 0;
    //          for (int key = i + 1; key < n + 1; key++) {
    //              if (arr[key] == arr[i]) {
    //                  current_count++;
    //              }
    //          }
    //          if (current_count > max_count) {
    //              max_count = current_count;
    //              value_dup = arr[i];
    //          }
    //      }

    //      cout << value_dup << endl;

    // }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int value_dup;
        for(int i=0;i<n+1;i++){
            cin>>arr[i];
        }
        sort(arr,arr +n+1);
        value_dup = *adjacent_find(arr, arr + n + 1);
        
        cout << value_dup << "\n";
        
    
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FINDUP)