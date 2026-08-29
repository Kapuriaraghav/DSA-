# JWHEFQ100

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T12:37:46.777Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool happy=false;
        int n=s.length();
        int streak=0;
        for(int i=0;i<n;i++){
            if(streak<0){
                streak=0;
            }
            else if(streak==3){
                happy=true;
                break;
            }
            else if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' ){
                streak++;
            }
            else{
                streak=0;
            }
        }
        if(happy){
            cout<<"HAPPY"<<endl;
        }
        else{
            cout<<"SAD"<<endl;
        }
            
        }
    }



```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ100)