# DSACPR50

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-26T05:19:45.756Z  

```c_cpp
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        // wrtie your code here
        int majorityElement=0;
        int count=0;
        for(int x : arr){
            if(count ==0){
                majorityElement=x;
                count=1;
            }
            else if (x==majorityElement){
                count++;
            }
            else{
                count--;
            }
        }
        return majorityElement;
    }
};

```

---

[View on CodeChef](https://www.codechef.com/problems/DSACPR50)