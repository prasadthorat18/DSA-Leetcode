class Solution {
public:
    int minMoves(vector<int>& arr) {
        int n= arr.size();

        int mini = *min_element(arr.begin(), arr.end());

        int moves = 0;

        for(int i=0; i<n; i++){
            int diff = arr[i]-mini;
            moves = moves + diff;
        }
        return moves;
    }
};