# DSACPR55

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Transpose of a Matrix

Given a 2D array $A$, Output the Transpose of this matrix.

 **Note** : The transpose of a matrix is an operation that flips the matrix over its diagonal, effectively switching the row and column indices of the matrix elements. If you have a matrix $A$ with dimensions $m \times n$ (meaning it has $m$ rows and $n$ columns),

### Input Format
- The first line of input will contain two integers $N$ and $M$ denoting the rows and columns of the 2D array $A$.
- The next $N$ lines contain $M$ integers, denoting the elements in each row.
### Output Format

Output the transpose of $A$.

### Constraints
- $1 \leq N \leq 500$
- $1 \leq M \leq 1000$
### Sample 1:
Input
Output

```
5 4
8 2 4 1 
4 4 1 4
9 2 5 2
2 4 2 5
1 4 1 4
```

```
8 4 9 2 1 
2 4 2 4 4 
4 1 5 2 1 
1 4 2 5 4 
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-19T02:57:32.326Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n , m ;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < m ; j++){
            cin>>arr[i][j];
        }
    }
    int T[m][n];
    for(int i = 0 ; i < n ; i ++){
        for(int j =0 ; j< m ; j++){
            T[j][i]=arr[i][j];
        }
    }
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DSACPR55)