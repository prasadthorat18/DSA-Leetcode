class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();

        int cnt=0;
        int ans=0;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                cnt++;
                ans=max(ans, cnt);
            }
            else{
                cnt=0;
            }
        }
        return ans;
        
    }
};