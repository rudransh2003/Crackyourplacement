//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    for(int i=0;i<str.length();i++){
	        for(int j=i+1;j<str.length();j++){
	            if(str[i]==str[j]){
	                str.erase(str.begin()+j);
	                j--;
	            }
	        }
	    }
	    return str;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends