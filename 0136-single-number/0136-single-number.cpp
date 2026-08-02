class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n=arr.size();

        int xor1=0;
        for(int i=0; i<n; i++){
            xor1=xor1^arr[i];
        }
        return xor1;
    }
};