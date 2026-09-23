class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n= arr.size();
        int lb=lowbound(arr,target);

        if(lb == n || arr[lb] != target){
            return {-1, -1};
        }
        return {lb, uppBound(arr, target)-1};
   
    }
    int lowbound(vector<int>& arr, int target){

        int lb = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        return lb;
    }

    int uppBound(vector<int>& arr, int target){

         int ub = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
         return ub;
    }
};