// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
#define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        if(n==1)
        {
            vector<ll> t;
            t.push_back(1ll);
            return t;
        }
        int mod=1e9+7;
        vector<ll> res=nthRowOfPascalTriangle(n-1);
        vector<ll> ans;
        ans.push_back(1ll);
        for(int i=1;i<res.size();i++)
        {
            ans.push_back((res[i]+res[i-1])%mod);
        
        }
        ans.push_back(1ll);
        return ans;
    }
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends