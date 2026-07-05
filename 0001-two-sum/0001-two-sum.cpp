class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();

        
        int total=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                total=arr[i]+arr[j];
                if(total==target){
                     return {i,j};
                }
            }
        }
        return {};
    }
};