class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> starting,ending;
        int i,n=intervals.size();
        for(i=0;i<n;i++)
        {
            starting.push_back(intervals[i][0]);
            ending.push_back(intervals[i][1]);
        }
        sort(starting.begin(),starting.end());
        sort(ending.begin(),ending.end());
        int j=0,groups=1,ans=1;
        i=1;
        while(i<n && j<n)
        {
            if(starting[i]<=ending[j])
            {
                groups++;
                i++;
            }
            else
            {
                groups--;
                j++;
            }
            ans=max(ans,groups);
        }
        return ans;
    }
};