# JWHEFQ111

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Check Isomorphic Strings

You are given two strings, $s$ and $t$. Determine whether these two strings are `isomorphic`.

Two strings are said to be  **isomorphic**  if characters in string $s$ can be replaced to get string $t$, such that:

- Each character in $s$ maps to exactly one character in $t$.
- No two different characters in $s$ map to the same character in $t$.
- The order of characters is preserved.
- A character is allowed to map to itself.
## Constraints
- $1 \leq N \leq 100$
- $1 \leq |s| = |t| \leq 10^5$
- Strings $s$ and $t$ consist of ASCII characters.
### Input Format
- The first line contains a single integer $N$ — the number of test cases.
- For each test case: The first line contains the string $s$. The second line contains the string $t$.
### Output Format
- For each test case, print: "YES" if the strings are isomorphic. "NO" otherwise.
### Sample 1:
Input
Output

```
2
mno
pqr
hello
world

```

```
YES
NO

```

### Explanation:
- "mno" -> "pqr": mapping m->p, n->q, o->r YES
- "hello" -> "world": 'l' maps to two different letters 'r' and 'l' NO
### Sample 2:
Input
Output

```
3
abcabc
xyzxyz
pqrpqr
mnopmn
abcd
abcc

```

```
YES
NO
NO

```

### Explanation:
- "abcabc" -> "xyzxyz" YES
- "pqrpqr" -> "mnopmn" NO
- "abcd" -> "abcc" last character maps to two letters.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T03:42:31.156Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    string s , t;
	    cin>>s>>t;
	    int map_s_to_t[256]={0};
	    int map_t_to_s[256]={0};
	    bool is_isomorphic=true;
	    for(int i =0 ; i<s.length();i++){
	        char char_s=s[i];
	        char char_t=t[i];
	        if(map_s_to_t[char_s]==0 && map_t_to_s[char_t]==0){
	            map_s_to_t[char_s]=char_t;
	            map_t_to_s[char_t]=char_s;
	        }
	        else if(map_s_to_t[char_s] != char_t || map_t_to_s[char_t] != char_s){
	            is_isomorphic=false;
	            break;
	        }
	    }
	    if(is_isomorphic){
	        cout<<"Yes"<<endl;
	    }
	   else{
	       cout<<"No"<<endl;
	   }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ111)