class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        vector<int> ans;
        for(int i=0; i<n; i++){
            if(arr[i] == target){
                ans.push_back(i);
            } 
        }
        return {ans};

    }
};