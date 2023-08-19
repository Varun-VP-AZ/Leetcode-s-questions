class Solution {
public:
    bool validchar(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }

    char Tolowercase(char ch){
        if((ch>='a' && ch<='z') || (ch >= '0' && ch <='9' )) {
            return ch;
        }
        else return (ch -'A' +'a');
    }
    bool ispalindrome(string s){
        int st = 0;
        int e = s.length() - 1;

        while(st<=e){
            if(s[st] != s[e]){
                return 0;
            }else {
                st++;
                e--;
            }
        }
        return 1;
    }
        
    bool isPalindrome(string s) {
        string temp = "";

        for(int i = 0; i<s.length(); i++){
            if(validchar(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int j= 0; j< temp.length();j++){
            temp[j] = Tolowercase(temp[j]);
        }
        return ispalindrome(temp);
        
    }
};