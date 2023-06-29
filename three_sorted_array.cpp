/*Q1.Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

**Example 1:**

Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

Output: [1,5]
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> findCommonElements(vector<int>& arr1,vector<int>& arr2, vector<int>& arr3) {
    vector<int> ans;
    int i=0,j=0,k=0;

    while (i<arr1.size() && j<arr2.size() && k<arr3.size()) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            ans.push_back(arr1[i]);
            ++i;
            ++j;
            ++k;
        } 
		else if (arr1[i]<arr2[j]) {
            i++;
        } else if (arr2[j]<arr3[k]) {
            j++;
        } 
		else {
            k++;
        }
    }

    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    	int n1,n2,n3;
		cin>>n1;
		cin>>n2;
		cin>>n3;
		vector<int>v1;
		vector<int>v2;
		vector<int>v3;
		for(int i=0;i<n1;i++){
			int x;
			cin>>x;
			v1.push_back(x);
			
		}
		
		for(int i=0;i<n2;i++){
			int y;
			cin>>y;
			v2.push_back(y);
			
		}
		
		for(int i=0;i<n3;i++){
			int z;
			cin>>z;
			v3.push_back(z);		
		}
    	vector<int>result =findCommonElements(v1,v2,v3);

	    for (int i=0;i<result.size();i++) {
	        cout << result[i]<< " ";
	    }
	    cout<<endl;
    }
    return 0;
}

