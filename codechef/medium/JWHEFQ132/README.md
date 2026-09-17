# JWHEFQ132

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T05:15:25.747Z  

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

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ132)