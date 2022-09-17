class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>* sub = new unordered_set<char>();
        int maxLen = 0, i=0, last=0;
        while(i<s.length()){
            if(sub->count(s[i])){
                char ch = s[i];
                do{
                    i--;
                }while(s[i] != ch);
                i++;
                sub->insert(s[i]);
                maxLen = (sub->size()>maxLen)?sub->size():maxLen;
                sub->clear();
                continue;
            }
            sub->insert(s[i]);
            i++;
        }
        return (sub->size()>maxLen)?sub->size():maxLen;
    }
};
