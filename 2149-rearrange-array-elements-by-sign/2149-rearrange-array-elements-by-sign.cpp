class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();

        vector<int> Positive;
        vector<int> Negative;
        
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                Positive.push_back(arr[i]);
            }else{
                Negative.push_back(arr[i]);
            }
        }

        for(int i=0; i < n/2; i++){
            arr[2 * i] = Positive[i];
            arr[2 * i+1] = Negative[i];
        }
        return arr;
    }
};