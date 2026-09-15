# JWHEFQ102

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Chef and Roman Numbers

Chef has found an ancient Roman numeral and wants to know its integer value.

Roman numerals use the following symbols:

Symbol	Value
I	1
V	5
X	10
L	50
C	100
D	500
M	1000

Normally, symbols are added from left to right.
For example:
 **III = 3**,  **VIII = 8**,  **XII = 12** 

However, if a smaller value comes before a larger one, it is subtracted:

- I before V (5) or X (10) → 4 or 9
- X before L (50) or C (100) → 40 or 90
- C before D (500) or M (1000) → 400 or 900

Your task is to help Chef convert the given Roman numeral string S into its integer value.

## Constraints
- $1 \le |S| \le 15$
- $S \text{ contains only the characters } I, V, X, L, C, D, \text{ and } M$.
- $\text{It is guaranteed that } S \text{ is valid and represents a number between } 1 \text{ and } 3999$.
### Input Format
- The input consists of a single line containing a string S, which represents a Roman numeral.
### Output Format
- Print a single integer — the decimal value of the Roman numeral.
### Sample 1:
Input
Output

```
XLII
```

```
42

```

### Sample 2:
Input
Output

```
CMXLIV

```

```
944

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-15T11:27:02.769Z  

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

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ102)