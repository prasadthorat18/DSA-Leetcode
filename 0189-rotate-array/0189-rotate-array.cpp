class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        int n=arr.size();
        d=d%n;
        vector<int> temp;

        for(int i=n-d; i<n; i++){
            temp.push_back(arr[i]);
        }
        for(int i=n-1; i>=d; i--){
            arr[i]=arr[i-d];
        }
        
        for(int i=0; i<d; i++){
            arr[i]=temp[i];
        }

    }
};