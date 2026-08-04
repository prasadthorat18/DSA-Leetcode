class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        
        int n=arr.size();

        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(arr[i]);
        }
        
        int small=arr[0];
        int maxi=arr[0];
        for(int i=0; i<n; i++){
            small=min(arr[i], small);
            maxi=max(arr[i], maxi);
        }
        vector<int> ans;
        for(int i=small; i<=maxi; i++){
           if(st.find(i) == st.end()){
                ans.push_back(i);
           }
        }
        return ans;
    }
};