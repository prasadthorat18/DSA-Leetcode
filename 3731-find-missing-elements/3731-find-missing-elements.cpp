class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        
        int n=arr.size();
        
        int small=arr[0];
        int maxi=arr[0];
        for(int i=0; i<n; i++){
            small=min(arr[i], small);
            maxi=max(arr[i], maxi);
        }
        vector<int> ans;
        for(int i=small; i<=maxi; i++){
            bool flag=0;
            for(int j=0; j<n; j++){
                if(arr[j] == i){
                    flag=1;
                    break;
                }
            }
            if(flag == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};