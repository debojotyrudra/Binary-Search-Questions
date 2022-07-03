bool isPerfectSquare(int num) {
        long long low=1,high=num-1;
        if(num==1)
            return true;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid<num)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    
