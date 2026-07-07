class Solution {
public:
    int reverse(int n) {
        long long reversed=0;
        
        while(n!=0){
            int lst= n % 10;
            reversed = reversed*10+(lst);
            n=n/10;
        } 
        if (reversed < INT_MIN || reversed > INT_MAX)
            return 0;
            
        return reversed;
    }
};