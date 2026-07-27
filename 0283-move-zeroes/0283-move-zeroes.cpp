class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();

        vector<int> temp(n, 0);
        int index=0;
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                temp[index]=arr[i];
                index++;
            }
        }
        for(int i=0; i<n; i++){
            arr[i]=temp[i];
        }
    }
};