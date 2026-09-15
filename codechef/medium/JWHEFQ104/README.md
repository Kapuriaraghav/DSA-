# JWHEFQ104

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-15T11:27:07.029Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int getprayrita(char roman){
    switch(roman){
        case'I': return 1;
        case'V': return 5;
        case'X': return 10;
        case'L': return 50;
        case'C': return 100;
        case'D': return 500;
        case'M': return 1000;
    }
}

int main() {
	// your code goes here
    string s;
    cin>>s;
    // char one='I'; char five = 'V'; char ten='X' ; char fifty ='L' ; 
    // char hundred = 'C' ; char fivehundred='D' ; char thousand = 'M';
    // int one =1 , five =5 , ten = 10 , fifty = 50 , hundred = 100,
    // fivehundred=500 , thousand=1000;

    int total=0;
    // int current=0;
    int current_val=0;
    int prev_val=0;
    for(int i = s.length()-1 ; i>=0 ; i--){
        current_val=getprayrita(s[i]);
        if(current_val<prev_val){
            total=total-current_val;
        }    
        else{
            total=total+current_val;
        }
        prev_val=current_val;
    }
    cout<<total<<endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ104)