# JWHEFQ96

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Reverse Words in a String

You are given a string $s$ consisting of English letters (uppercase and lowercase), digits, and spaces `' '`. The string may contain leading or trailing spaces, or multiple spaces between words.

Your task is to  **reverse the order of the words**  in the string. A word is defined as a sequence of non-space characters.

The resulting string should:

- Contain words in reversed order.
- Have only single spaces separating words.
- Not contain leading or trailing spaces.
## Constraints
- $1 \le |s| \le 10^4$
- The string $s$ contains: Uppercase English letters ($A–Z$) Lowercase English letters ($a–z$) Digits ($0–9$) Space characters (' ')
- The string may contain: Leading spaces Trailing spaces Multiple consecutive spaces between words
- There is at least one word in $s$.
### Input Format
- The first line contains a single string $s$.
### Output Format
- Print a single line containing the words of $s$ in reversed order.
- Words must be separated by exactly one space.
- There must be no leading or trailing spaces in the output.
### Sample 1:
Input
Output

```
OpenAI   creates amazing   AI   models  

```

```
models AI amazing creates OpenAI

```

### Sample 2:
Input
Output

```
Data   Science is fun

```

```
fun is Science Data

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T08:51:08.217Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    string reverse_ans="";
    while(ss>>word){
    reverse_ans=word+" "+reverse_ans;
    }
    cout<<reverse_ans<<endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ96)