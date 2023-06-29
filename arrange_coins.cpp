'''**Question 5**
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase **may be** incomplete.

Given the integer n, return *the number of **complete rows** of the staircase you will build*.'''

#include<bits/stdc++.h>
using namespace std;


int arrangeCoins(int n) {
        int i=1;
        int count =0;
        while(n>0){
           n = n-i;
           i++;
           if(n>=0)
           count++;
        }
       return count; 
    }
    
    
int main() {
    int t;
    cin>>t;
    while(t--){
    	int n;
		cin>>n; 
		cout<<arrangeCoins(n)<<endl; 
		
	}
	return 0;
}
	
