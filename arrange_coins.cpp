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
	
