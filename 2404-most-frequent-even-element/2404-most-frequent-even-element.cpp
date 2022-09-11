class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int i,n=nums.size();
        map<int,int> map;
        for(i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                map[nums[i]]++;
            }
        }
        int ans=-1,mx=-1;
        for(auto it:map)
        {
            if(mx<it.second)
            {
                mx=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};