class Solution {
public:

    bool Possible(vector<int>& bloomDay,int day, int m, int k){
        int n = bloomDay.size();

        int cnt = 0;
        int bqt = 0;
        for(int i=0; i<n; i++){

            if(bloomDay[i] <= day){
                cnt++;
            }
            else{
                bqt = bqt + (cnt / k);
                cnt = 0;
            }
        }
        bqt = bqt + (cnt / k);
        if( bqt >= m) return true;
        else return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        long long impossible =  1LL * m*k;
        if(impossible > n) return -1;

        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());

        int low = mini;
        int high = maxi;
        
        while( low <= high){
            int mid = low + (high - low)/2;

            if(Possible(bloomDay, mid, m, k)){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
        
    }
};