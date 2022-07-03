int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c=0;
        sort(arr2.begin(),arr2.end());
        for(int n:arr1)
        {
            if(upper_bound(arr2.begin(),arr2.end(),n+d)==lower_bound(arr2.begin(),arr2.end(),n-d))
                c++;
        }
        return c;
    }
