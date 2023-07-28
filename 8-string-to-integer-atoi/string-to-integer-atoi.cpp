class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();

        while(s[i] == ' '){
            i++;
        }

        bool pos = false;
        bool neg = false;

        if (s[i] == '+') {
            pos = true;
            i++;
        }

        if (s[i] == '-') {
            neg = true;
            i++;
        }

        double ans = 0;
        while(i<n and s[i] >= '0' and s[i] <='9'){
            ans = ans*10 + (s[i] - '0');
            i++;
        }
        if(neg == true){
            ans = -ans;
        }
        if(pos == true and neg == true){
            ans = 0;
        }
        if(ans > INT_MAX){
            ans = INT_MAX;
        }
        if(ans < INT_MIN){
            ans = INT_MIN;
        }

        return (int)ans;
    }
};