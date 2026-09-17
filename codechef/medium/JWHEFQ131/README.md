# JWHEFQ131

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Linear Search in string

Given a string S and a character as input, print the first position of the character in the string if it is present. If the character does not exist in the string, print " **-1** ".

### Input Format
- The first line contains a string.
- The second line contains a single character.
### Output Format
- Print the first position (0-based index) of the character in the string if it is present.
- Print "-1" if the character is not present in the string.
### Constraints
- $1 \leq |S| \leq 100000$
- S consists of printable ASCII characters without spaces.
- The search character is a single printable ASCII character.
### Sample 1:
Input
Output

```
helping
g
```

```
6
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T05:15:24.615Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    char one;
    cin>>one;
    
    int position=-1;
    for(int i =0 ; i<s.length();i++){
        if(s[i]==one){
            
            position=i;
            break;
        }
    }
    cout<<position<<endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ131)