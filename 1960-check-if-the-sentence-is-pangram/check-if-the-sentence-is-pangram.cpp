class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int>mpp;
        int sum = 0;

        for(int i = 0; i < sentence.size(); i++){
            if(!mpp.count(sentence[i])){
                mpp[sentence[i]]++;
                sum++;

            }
           
        }
         if(sum == 26){
                return true;
            }
        return false;
    }
};