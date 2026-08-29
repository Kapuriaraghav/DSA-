# JWHEFQ99

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Chef and Happy String

Chef has a string $S$ with him. Chef is happy if the string contains a  **contiguous substring**  of length  **strictly greater**  than $2$ in which all its characters are vowels.

Determine whether Chef is happy or not.

Note that, in english alphabet, vowels are `a`, `e`, `i`, `o`, and `u`.

### Input Format
- First line will contain $T$, number of test cases. Then the test cases follow.
- Each test case contains of a single line of input, a string $S$.
### Output Format

For each test case, if Chef is happy, print `HAPPY` else print `SAD`.

You may print each character of the string in uppercase or lowercase (for example, the strings `hAppY`, `Happy`, `haPpY`, and `HAPPY` will all be treated as identical).

### Constraints
- $1 \leq T \leq 1000$
- $3 \leq |S| \leq 1000$, where $|S|$ is the length of $S$.
- $S$ will only contain lowercase English letters.
### Sample 1:
Input
Output

```
4
aeiou
abxy
aebcdefghij
abcdeeafg

```

```
Happy
Sad
Sad
Happy

```

### Explanation:

 **Test case $1$:**  Since the string `aeiou` is a contiguous substring and consists of all vowels and has a length $\gt 2$, Chef is happy.

 **Test case $2$:**  Since none of the contiguous substrings of the string consist of all vowels and have a length $\gt 2$, Chef is sad.

 **Test case $3$:**  Since none of the contiguous substrings of the string consist of all vowels and have a length $\gt 2$, Chef is sad.

 **Test case $4$:**  Since the string `eea` is a contiguous substring and consists of all vowels and has a length $\gt 2$, Chef is happy.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T12:37:45.670Z  

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

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ99)