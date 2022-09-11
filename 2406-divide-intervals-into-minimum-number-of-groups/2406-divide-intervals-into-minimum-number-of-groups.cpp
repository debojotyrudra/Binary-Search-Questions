class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        map<int,int> map;
        for(auto &it:intervals)
        {
            map[it[0]]++;
            map[it[1]+1]--;
        }
        int ans=0,temp=0;
        for(auto &it:map)
        {
            ans=max(ans,temp+=it.second);
        }
        return ans;
    }
};