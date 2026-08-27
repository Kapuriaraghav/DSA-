# JWHEFQ87

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Largest Odd Substring

You are given a string $nums$ consisting of digits representing a large integer. Your task is to find the largest-valued  **odd integer**  (as a substring of $nums$) that can be obtained.

A  **substring**  is a contiguous sequence of characters within the string.

## Constraints
- $1 \le |num| \le 10^5$
- The string $num$ contains only digits $0–9$
- The string does not contain leading zeros
- There is no limit on the size of the integer represented by the substring
### Input Format
- The first line contains a single string num.
### Output Format
- Print a single line: The largest odd integer substring of num Or -1 if no odd substring exists
### Sample 1:
Input
Output

```
128764

```

```
1287

```

### Explanation:

The largest odd substring ends at the first odd digit from the right, which is '7'.

### Sample 2:
Input
Output

```
60042

```

```
-1

```

### Explanation:

There are no odd digits in the string, so no odd substring exists.

### Sample 3:
Input
Output

```
987654321

```

```
987654321

```

### Explanation:

The last digit is '1', which is odd, so the entire number is the largest odd substring.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-27T09:13:23.917Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string num;
    cin>>num;
    for(int i=num.length()-1;i>=0;i--){
        if((num[i]-'0')%2!=0){
            cout<<num.substr(0,i+1)<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ87)