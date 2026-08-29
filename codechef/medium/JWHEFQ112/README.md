# JWHEFQ112

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T13:10:58.498Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    string t;
    cin>>s>>t;
    int n=s.length();
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
   if(s==t){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ112)