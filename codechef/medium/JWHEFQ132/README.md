# JWHEFQ132

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Miscellaneous Linear Search

Given  **n**  pairs of integers, write a program to check if there exists any pair that contains both integers  **a**  and  **b**  in any order.

### Input Format
- The first line contains an integer $n$, the number of pairs.
- The next $n$ lines each contain two space-separated integers representing a pair.
- The last line contains two integers $a$ and $b$.
### Output Format
- Print "Yes" if there exists any pair that contains both integers a and b in any order.
- Print "No" if no such pair exists.
### Sample 1:
Input
Output

```
4
2 3
4 5
3 5
1 7
5 3
```

```
Yes
```

### Sample 2:
Input
Output

```
4
2 3
4 5
3 5
1 7
5 9
```

```
No
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T05:56:32.112Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int pairs[n][2];
    for(int i=0;i<n;i++){
        cin>>pairs[i][0]>>pairs[i][1];
    }
    int a,b;
    cin>>a>>b;
    bool found = false;
    for(int i = 0 ; i<n ; i++){
        if((pairs[i][0]==a && pairs[i][1]==b )|| (pairs[i][0]==b && pairs[i][1]==a)){
            found=true;
            break;
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

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ132)