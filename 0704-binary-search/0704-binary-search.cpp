class Solution {
public:
    int search(vector<int>& arr, int target) {
        return bs( arr, 0, arr.size()-1, target);  
    }

    int bs(vector<int>& arr, int low, int high, int target){
        if(low> high) return -1;

        int mid = (low+high) /2;

        if(arr[mid] == target) return mid;

        else if(target > arr[mid]){
            return bs(arr, mid+1, high, target);
        }
        else{
            return bs(arr, low, mid-1,target );
        }
    }
    
};