class Solution {
public:
    int partitionString(string s) {
        set<char> set;
        int i,n=s.size(),sub=1;
        for(i=0;i<n;i++)
        {
            if(set.find(s[i])==set.end())
                set.insert(s[i]);//insert until we found the same character
            else
            {
                sub++;//duplicate character found so we will start with a new substring 
                set.clear();//clear previous string as we will store new one
                set.insert(s[i]);//insert character until we find a duplicate character.
            }
        }
        return sub;
    }
};