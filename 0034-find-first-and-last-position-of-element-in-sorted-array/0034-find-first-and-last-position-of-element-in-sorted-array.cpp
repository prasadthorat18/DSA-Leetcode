class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int n = arr.size();

        int first = firstocc(arr, x);
        int last = lastocc(arr, x);

        if(first == -1 || arr[first] != x) return {-1,-1};

        return{first, last-1};
    }

    int firstocc(vector<int>& arr, int x){
        int n=arr.size();

        int low=0;
        int high = n-1;
        int first = -1;

        while(low <= high){
            int mid = (low + high)/2;

            if(arr[mid] >= x){
                first = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return first;
    }
    int lastocc(vector<int>& arr, int x){
        int n=arr.size();

        int low=0;
        int high = n-1;

        int last = n;

        while(low <= high){
            int mid = (low + high)/2;

            if(arr[mid] > x){
                last = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return last;
    }
};