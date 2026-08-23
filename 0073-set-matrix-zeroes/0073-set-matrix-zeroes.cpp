class Solution {
public:

    void setZeroes(vector<vector<int>>& arr){
        int n=arr.size();
        int m=arr[0].size();

        vector<int> row(n, 0);
        vector<int> col(m, 0);

        // first pass -> if zero is there mark row[i] and col[j] = 1 repectively
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // pass 2 -> if any moment row and col arr is marked put entire col and row as 0
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row[i] == 1 || col[j] == 1){
                    arr[i][j] = 0;
                }
            }
        }
    }
};