class Solution {
public:

    bool missing(int num, vector<int>& arr){
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == num) return false;
        }
        return true;
    }

    int findKthPositive(vector<int>& arr, int k) {

        int elem = 0;
        for(int i=1; i<=2000; i++){

            if(missing(i, arr)) elem++;

            if(elem == k) return i;
        }
        return -1;   
    }
};