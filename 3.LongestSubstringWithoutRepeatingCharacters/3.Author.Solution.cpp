class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        vector<int>mp(256,-1);
        int len=0;
        int l=0,r=0;
        while(r<str.length()){
            if(mp[str[r]]!=-1)
                l = max(mp[str[r]]+1,l);
            mp[str[r]] = r;
            len = max(len,r-l+1);
            r++;
        }
        return len;
    }
};
