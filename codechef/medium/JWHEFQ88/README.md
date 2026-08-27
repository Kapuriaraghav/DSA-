# JWHEFQ88

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-27T09:13:24.836Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string num;
    cin>>num;
    for(int i=num.length()-1;i>=0;i--){
        if((num[i]-'0')%2!=0){
            cout<<num.substr(0,i+1)<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ88)