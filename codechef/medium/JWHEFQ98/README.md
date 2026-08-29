# JWHEFQ98

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T12:00:01.341Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==t[i]){
                cout<<"G";
            }
            else{
                cout<<"B";
            }
        }
        cout<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ98)