class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x;
        long long reversed=0;
        while(n!=0){
            int lst=n%10;
            reversed=reversed*10+lst;
            n=n/10;
        }
        if(x==reversed){
           return true;
        }
        else{
            return false;
        }
    }
};