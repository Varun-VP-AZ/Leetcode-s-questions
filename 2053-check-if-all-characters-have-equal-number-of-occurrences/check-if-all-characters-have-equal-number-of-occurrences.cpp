class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int>mpp;
        for(int i = 0; i<s.size(); i++){
            mpp[s[i]]++;
        }

        int count = mpp[s[0]];
        for(auto i:mpp)
        {
            if(i.second != count) return false;
        }
        return true;
    }
};