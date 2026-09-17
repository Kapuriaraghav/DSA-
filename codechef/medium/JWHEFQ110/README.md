# JWHEFQ110

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Chef and Character Frequency Sort

Chef is experimenting with strings. He wants to rearrange all the characters of a given string  **$S$**  in decreasing order of their frequency.

If two characters have the same frequency, Chef sorts them in  **lexicographical (ASCII) order**.

Help Chef by printing the final rearranged string.

### Input Format
- The first and only line contains a string S.
- The string consists of uppercase and lowercase English letters and digits.
### Output Format

Print the rearranged string after sorting by the given rules.

### Constraints
- $1 \le |S| \le 5 \times 10^{5}$
### Sample 1:
Input
Output

```
CookBook

```

```
ooookkBC

```

### Explanation:

 **Input:**  `CookBook`

The character frequencies are:

- o $\rightarrow$ 4
- B $\rightarrow$ 1
- C $\rightarrow$ 1
- k $\rightarrow$ 1

Chef first places characters in  **decreasing frequency**  order, so `o` comes first as `oooo`. The remaining characters all have the same frequency  **1**, so they are arranged in  **ASCII (lexicographical) order** :

`k < B < C`

So the final rearranged string is:

```
ooookkBC

```

### Sample 2:
Input
Output

```
aabbbcddd

```

```
bbbdddaac

```

### Explanation:

 **Input:**  `aabbbcddd`

The character frequencies are:

- b $\rightarrow$ 3
- d $\rightarrow$ 3
- a $\rightarrow$ 2
- c $\rightarrow$ 1

Characters with frequency  **3**  are `b` and `d`, and since `b < d`, they appear as: `bbbddd`

Then `a` appears twice: `aa`

Finally, `c` appears once: `c`

So the final rearranged string is:

```
bbbdddaac

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T03:42:16.361Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

class Chardata{
    public:
    int count;
    char letter;
};

bool CompareChars(Chardata a, Chardata b){
        if(a.count!=b.count){
            return a.count>b.count;
        }
        else{
            return a.letter<b.letter;
        }
    }

int main(){
    string s;
    cin>>s;
    Chardata freq[256];
    for(int i = 0 ; i<256; i++){
        freq[i].count=0;
        freq[i].letter=i;
    }
    for(int i = 0 ; i<s.length() ; i++){
        freq[s[i]].count++;
    }
    sort(freq,freq+256,CompareChars);
    for(int i = 0 ; i < 256 ; i++){
        if(freq[i].count==0){
            break;
        }
        for(int j = 0 ; j<freq[i].count ; j++){
            cout<<freq[i].letter;
        }
    }
    cout<<endl;
    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ110)