class Solution {
public:
    bool isPossible(vector<int>& weights, int days, int mid){
        int daycount = 1;
        int weightsum = 0;
        int n = weights.size();

        for(int i = 0; i<n; i++){
            if(weightsum + weights[i] <= mid){
                weightsum += weights[i];
            }
            else{
                daycount++;
                if(daycount > days || weights[i] > mid){
                    return false;
                }
                weightsum = weights[i];
            }

        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int n = weights.size();
        int e = 0;
        for(int i = 0; i<n; i++){
            e +=weights[i];
        }
        int mid = s + (e-s)/2;
        int ans = -1;

        while(s<=e){
            if(isPossible(weights, days, mid)){
                ans = mid;
                e = mid - 1;

            } else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};