# JWHEFQ93

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Efficient PAN Linking

There are $20$ officers in Chefland who can link the PAN to Aadhar.
$N$ applications were received for linking PAN. However, due to an internal conflict, each officer intends to process exactly the  **same**  number of applications.

Determine the  **minimum**  number of applications that would remain unprocessed.

Note that $N$ can be huge and might not fit in an integer.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single integer $N$, denoting the number of applications.
### Output Format

For each test case, output the  **minimum**  number of applications that will remain unprocessed.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \lt 10^{100}$
### Sample 1:
Input
Output

```
4
1
35
127
7463749812302340912745859

```

```
1
15
7
19
```

### Explanation:

 **Test case $1$:**  Each officer would process $0$ applications and $1$ application would remain unprocessed.

 **Test case $2$:**  Each officer would process $1$ application and $35-20\cdot 1=15$ applications would remain unprocessed.

 **Test case $3$:**  Each officer would process $6$ applications and $127-20\cdot 6=7$ applications would remain unprocessed.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T07:15:51.274Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int ans;
        int twodig;
        if(n==1){
            ans=(s[0]-'0')%20;
        }
        else{
            int tens_digit = s[n-2]-'0';
            int ones_digit=  s[n-1]-'0';
            twodig=(tens_digit*10)+ones_digit;
            ans=twodig%20;
        }
       
        
        cout<<ans<<endl;
    }

}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ93)