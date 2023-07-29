class Solution {
public:
    int doublereverse(int n){
        int res = 0;
        int num1 = 0;
        while(n != 0){
            res = res*10 + n%10;
            n /= 10;
        }
        while(res != 0){
            num1 = num1*10 + res%10;
            res /= 10;
        }

        return num1;
    }
    bool isSameAfterReversals(int num) {
        if (num == doublereverse(num)){
            return true;
        } else return false;
    }
};