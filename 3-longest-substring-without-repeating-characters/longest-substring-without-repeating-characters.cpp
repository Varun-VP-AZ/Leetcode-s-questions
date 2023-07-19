class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> substring;
        int maxlen = 0;
        int l = 0;

        for(int r=0; r<n; r++){
            if(substring.count(s[r]) ==0){
                substring.insert(s[r]);
                maxlen = max(maxlen, r-l+1);
            } else {
                while(substring.count(s[r])){
                    substring.erase(s[l]);
                    l++;
                }
                substring.insert(s[r]);
            }

        }
        return maxlen;
    }
};