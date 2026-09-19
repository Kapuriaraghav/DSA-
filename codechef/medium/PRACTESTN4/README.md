# PRACTESTN4

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Matrix Transpose

Chef has recently come across matrices and learned about the transpose of a matrix. He has a matrix of order `N x M`.
Your task is to help Chef find out the transpose of the matrix.

### Input Format
- The first line of input contains two space separated integers, N and M.
- Then N lines of input follow, each containing M space separated integers representing the matrix elements.
### Output Format
- Print N lines, each containing M space separated integers, denoting the transpose of input matrix.
### Sample 1:
Input
Output

```
3 3
1 2 3
4 5 6
7 8 9
```

```
1 4 7
2 5 8
3 6 9
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-19T04:23:24.371Z  

```c_cpp
#include <stdio.h>

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][m];
// 	int temp;
	int t[m][n];
	for(int i =0 ; i< n ; i++){
	    for(int j =0 ; j< m ; j++){
	        scanf("%d" ,&a[i][j]);
	        t[j][i]=a[i][j];
	    }
	}
// 	for(int i = 0 ; i< n ; i++){
// 	    for(int j = i+1 ; j< m ; j++){
// 	        temp=a[i][j];
// 	        a[i][j]=a[j][i];
// 	        a[j][i]=temp;
// 	    }
// 	}
	for(int i = 0 ; i< m ;i++){
	    for(int j = 0 ; j< n ; j++){
	        printf("%d ", t[i][j]);
	    }
	    printf("\n");
	}
	
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PRACTESTN4)