# JWHEFQ131

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T05:09:34.740Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here  
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i = 0 ; i<n; i++){
	    cin>>arr[i];
	}
	bool found = false;
	for(int i = 0 ; i<n ; i++){
	    if(arr[i]==k){
	        found=true;
	    }
	}
	if(found){
	    cout<<"Yes"<<endl;
	}
	else{
	    cout<<"No"<<endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/JWHEFQ131)