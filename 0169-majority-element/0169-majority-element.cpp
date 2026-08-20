class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n= arr.size();
        int ans=0;
        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(arr[i] == arr[j]) cnt++;
            }
            if(cnt > n/2){
                ans= arr[i];
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