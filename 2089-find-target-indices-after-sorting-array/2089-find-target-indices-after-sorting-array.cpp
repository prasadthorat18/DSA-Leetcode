class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        bool ispresent = false;
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(arr[i] == target){
                ispresent = true;
                ans.push_back(i);
            } 
        }
        if(! ispresent) return {};

        return {ans};

    }
};