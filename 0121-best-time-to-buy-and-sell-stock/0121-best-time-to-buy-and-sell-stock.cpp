class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();

        int profit=0;
        int maxi=0;
        int mini=arr[0];
        for(int i=1; i<n; i++){
            profit = arr[i] - mini;

            maxi= max(profit , maxi);

            mini= min(mini, arr[i]);
        }

        return maxi;
    }
};