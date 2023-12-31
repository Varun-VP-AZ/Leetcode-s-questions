class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while(x != 0){
            res = res*10 + x%10;
            x /= 10;
        }

        if (res>INT_MAX || res<INT_MIN){
            return 0;
        }
        if(x<0){
            res = -res;
            return (int)res;
        }
        return (int)res;

        

    }
};