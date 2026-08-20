class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n= arr.size();
        
        int ans=0;
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        for(auto it : mpp){
            if(it.second > n/2){
                ans=it.first;
                break;
            }
        }
        return ans;
        // int cnt2=0;
        // for(int i=0; i<n; i++){
        //     if(arr[i]==el) cnt2++;
        // }
        // if(cnt2 > n/2) return el;

        // return -1;

        // the question already state that majority element is always presrent so direct print el
        
        

        
        
    }
};