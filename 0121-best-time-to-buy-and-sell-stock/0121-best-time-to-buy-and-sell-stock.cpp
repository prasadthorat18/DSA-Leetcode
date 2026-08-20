class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();

        int profit=0;
        int maxi=0;
        int mini = arr[0];
        for(int i=1; i<n; i++){
            profit= arr[i]-mini;

            maxi= max(maxi, profit);

            mini= min(arr[i], mini);
        }
        
        return maxi;
    }
};