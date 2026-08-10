class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();

        map<int,int> mpp;
        for(int i=0; i<n; i++){
            int current=arr[i];
            int moreNeeded = target - current;
            if(mpp.find(moreNeeded) != mpp.end()){
                return {mpp[moreNeeded], i};
            }
            mpp[current] = i;
        }
        return {-1, -1};
    }
};