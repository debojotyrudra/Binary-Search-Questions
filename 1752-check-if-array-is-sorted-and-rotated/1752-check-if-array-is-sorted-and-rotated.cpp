class Solution {
public:
    bool check(vector<int>& nums) {
        int i,n=nums.size(),c=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]>nums[(i+1)%n])
                c++;
            if(c>1)
                return false;
        }
        return true;
    }
};