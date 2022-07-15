// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        long long int res=1,mid=0,l=1,r=x/2;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(mid*mid==x)
            {
                return mid;
            }
            if(mid*mid<x)
            {
                res=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends