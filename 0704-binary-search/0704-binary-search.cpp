class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n= arr.size();
        return BS(0, n-1, arr, target);
    }
    int BS(int low, int high, vector<int>& arr, int target) {
        int n= arr.size();

        if(low > high) return -1;

        int mid = (low +high) / 2;
        
        if(arr[mid] == target) return mid;

        else if(arr[mid] < target){
            return BS(mid+1, high, arr, target);
        }
        else{
            return BS(low, mid-1, arr, target);
        }
    }
    
};