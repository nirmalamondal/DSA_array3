/*Q7.You are given an m x n matrix M initialized with all 0's and an array of operations ops, where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.

Count and return *the number of maximum integers in the matrix after performing all the operations**/

#include<bits/stdc++.h>
using namespace std;

int maxCount(int m, int n, vector<vector<int>>& ops) {

         int x = m, y = n;
        for (auto i: ops) {
            x = min(x, i[0]);
            y = min(y, i[1]);
        }

        return x*y;
        
    }
    
 
int main() {
    int t;
    cin>>t;
    while(t--){
    	int n,m;
		cin>>m>>n; 
		int numOps;
	    cout << "Enter the number of operations: ";
	    cin >> numOps;	
	    vector<vector<int>> ops(numOps, vector<int>(2));
	    for (int i = 0; i < numOps; i++) {
	        cin >> ops[i][0] >> ops[i][1];
	    }
	
	    int maxIntegers = maxCount(m, n, ops);
	    cout<< maxIntegers << endl;
    }
    return 0;
}
	    
