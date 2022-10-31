//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> satisfyEqn(int A[], int N) {
        // code here
        vector<int> ans;
        for(int a=0;a<N;a++)
        {
            for(int b=a+1;b<N;b++)
            {
                for(int c=0;c<N;c++)
                {
                    for(int d=c+1;d<N;d++)
                    {
                        if(!(a<b && a<c && c<d && b!=c && b!=d))
                        continue;
                        if(A[a]+A[b]==A[c]+A[d])
                        {
                            ans.push_back(a);
                            ans.push_back(b);
                            ans.push_back(c);
                            ans.push_back(d);
                            return ans;
                        }
                    }
                }
            }
        }
        ans={-1,-1,-1,-1};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends