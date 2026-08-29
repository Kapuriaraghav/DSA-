# JWHEFQ101

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Valid Anagram

You are given two strings $s$ and $t$. Your task is to determine whether $t$ is an  **anagram**  of $s$.

An anagram is a word formed by rearranging the letters of another word, using  **all the original letters exactly the number of times it is used**.

### Constraints
- $1 \leq |s|, |t| \leq 5 \times 10^4$
- Both $s$ and $t$ consist of lowercase English letters ($a – z$).
### Input Format
- The first line contains a single string $s$.
- The second line contains a single string $t$.
### Output Format
- Print $YES$ if $t$ is an anagram of $s$.
- Print $NO$ otherwise.
### Sample 1:
Input
Output

```
listen
silent

```

```
YES

```

### Explanation:

`"silent"` is an anagram of `"listen"`.

### Sample 2:
Input
Output

```
hello
world

```

```
No

```

### Explanation:

`"world"` cannot be rearranged to form `"hello"`.

### Sample 3:
Input
Output

```
aab
baa
```

```
YES
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T13:10:57.339Z  

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

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ101)