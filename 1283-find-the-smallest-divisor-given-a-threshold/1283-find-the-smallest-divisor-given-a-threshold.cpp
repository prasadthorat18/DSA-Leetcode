class Solution {
public:

    int Divisor_sum(vector<int>& arr, int threshold, int mid){
        int n= arr.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + ceil( (double)(arr[i]) / (double)(mid) );
        }
        return sum;
    }

    int smallestDivisor(vector<int>& arr, int threshold) {
        
        int n= arr.size();
        int maxi = *max_element(arr.begin(), arr.end());

        int low =1;
        int high = maxi;


        while(low <= high){
            int mid = (low + high) / 2;

            if( Divisor_sum(arr,threshold,mid) <= threshold){

                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;   
    }
};