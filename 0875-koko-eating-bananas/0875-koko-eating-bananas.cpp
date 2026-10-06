class Solution {
public:

    int Time_hours(int mid, vector<int>& piles, int h){
        long long hrs =0;
        for(int i=0; i<piles.size(); i++){
            hrs = hrs + ceil( (double)piles[i] / (double)mid );
            if( hrs > h){
                return hrs;
            }
        }
        return hrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int maxi = *max_element(piles.begin(), piles.end());

        int low = 1;
        int high = maxi;

        while( low <= high){
            
            int mid = (low + high ) / 2;

            long long TimeReq = Time_hours(mid, piles,h);

            if( TimeReq <= h ){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};