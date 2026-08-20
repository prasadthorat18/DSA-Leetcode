class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();

        int tsum=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                tsum= arr[i]+arr[j];
                if(tsum == target){
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};