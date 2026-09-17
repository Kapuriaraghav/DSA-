# JWHEFQ130

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Linear Search in array

Write a program to search for a specific element in an array and print " **Yes** " if the element is present, otherwise print " **No** ".

### Input:
- The first line contains an integer $n$, the length of the array and $k$, the element to be search.
- The second line contains $n$ space-separated integers representing the elements of the array.
### Output:
- Print "Yes" if the element $k$ is present in the array.
- Print "No" if the element $k$ is not present in the array.
### Constraints
- $1 \leq n \leq 100000$
- $-10^9 \leq k \leq 10^9$
- $-10^9 \leq arr_i \leq 10^9$
### Sample 1:
Input
Output

```
8 1
3 5 1 4 5 6 5 6
```

```
Yes
```

### Sample 2:
Input
Output

```
3 4
1 2 3
```

```
No
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T05:09:33.574Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here  
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i = 0 ; i<n; i++){
	    cin>>arr[i];
	}
	bool found = false;
	for(int i = 0 ; i<n ; i++){
	    if(arr[i]==k){
	        found=true;
	    }
	}
	if(found){
	    cout<<"Yes"<<endl;
	}
	else{
	    cout<<"No"<<endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ130)