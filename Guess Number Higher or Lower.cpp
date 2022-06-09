int guessNumber(int n) {
        int l=1,r=n;
        while(l<=r)
        {
            int pick=l+(r-l)/2;
            int ans=guess(pick);
            if(ans==0)
                return pick;
            else if(ans>0)
                l=pick+1;
            else
                r=pick-1;
        }
        return -1;
    }
