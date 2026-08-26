# DSACPR50

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Maximum Subarray Sum

Given an integer array $nums$, find the  **subarray**  with the largest sum, and print its sum.

 **Note** : A subarray is a contiguous non-empty sequence of elements within an array.

### Input Format
- The first line contains $T$, the number of test cases.
- The first line in each test case contains $N$, the number of elements in an array.
- The second line in each test case contains $N$ integers, denoting the elements in the array.
### Output Format

For each test case, output the maximum subarray sum of each array.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 100000$
- $-10^9 \leq A_i \leq 10^9$
### Sample 1:
Input
Output

```
3
9
-2 1 -3 4 -1 2 1 -5 4
1
1
5
5 4 -1 7 8
```

```
6
1
23
```

### Explanation:

Test Case $1.$ The maximum subarray sum for the first array is $6$ $($from subarray $[4, -1, 2, 1])$.
Test Case $2.$ For the second array, it's $1$ $($only one element $).$
Test Case $3.$ For the third array, it's $23$ $($from subarray $[5, 4, -1, 7, 8]).$

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-26T06:39:40.734Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        //  for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
    long long sum=0;
    long long  end_sum=arr[0];
    
        for(int i=0;i<n;i++){
        sum = sum + arr[i];
         if(sum>end_sum){
            end_sum=sum;
            
        }
        if(sum<0){
            sum=0;
        }
        
        }
        
       
        
    
    cout<<end_sum<<endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DSACPR50)