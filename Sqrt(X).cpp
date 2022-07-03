int mySqrt(int x) {
        long long low=0,high=x,ans=0;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            /*if(mid*mid==x)
            {
                return mid;
            }*/
            if(mid*mid<=x)
            {
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return (int)ans;
    }
