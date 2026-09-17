# JWHEFQ133

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Find Kth Character Position

Given a string  **s1**, a character  **c1**, and an integer  **k**, find and print the position of the $k$th occurrence of the character  **c1**  in the string  **s1**. If the $k$th occurrence does not exist, print  **-1**.

### Input Format
- The first line contains the string s1, the character c1, and the integer k separated by spaces.
### Output Format
- An integer representing the position of the $k$th occurrence of c1 in s1.
- If the $k$th occurrence does not exist, print -1.
### Constraints
- $1 \leq$ Length of string S1 $\leq 100000$
- s1 consists of lowercase and uppercase English letters.
- c1 is a single English alphabet character.
- $1 \leq k \leq 100000$.
### Sample 1:
Input
Output

```
HelloHowyoudoing H 2
```

```
5
```

### Sample 2:
Input
Output

```
funny n 3
```

```
-1
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T06:08:04.671Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    char c1;
    int k;
    cin>>s1>>c1>>k;
    int count = 0 ; 
    bool answer=false;
    for(int i = 0 ; i<s1.length() ; i++){
        if(s1[i]==c1){
            count++;
        }
        if(count==k){
            answer=true;
            cout<<i<<endl;
            break;
        }
       
    }
    if(!answer){
        cout<<"-1"<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ133)