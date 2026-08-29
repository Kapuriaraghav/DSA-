# JWHEFQ101

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T13:08:31.882Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int A_score=0;
        int B_score=0;
        bool A_server=true;
        bool B_server=false;
        int length;
        length=s.length();
        for(int i=0;i<length;i++){
            if(A_server==true && s[i]=='A'){
                A_score++;
            }
        else    if(B_server==true && s[i]=='B'){
                B_score++;
            }
        else    if(A_server==false && s[i]=='A'){
                A_server=true;
                B_server=false;
            }
           else  if(B_server==false && s[i]=='B'){
                B_server=true;
                A_server=false;
            }
        }
        cout<<A_score<<" "<<B_score<<endl;
    }

}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ101)