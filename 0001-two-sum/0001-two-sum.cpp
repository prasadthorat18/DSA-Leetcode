class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();

        map<int, int>mpp;
        int MoreNeed = 0;
        for(int i=0; i<n; i++){
            int current = arr[i];
            MoreNeed = target - current;
            if(mpp.find(MoreNeed) != mpp.end()){
                return {mpp[MoreNeed], i};
            }
            mpp[current] = i;
        }
        return {-1,-1};
    }
};