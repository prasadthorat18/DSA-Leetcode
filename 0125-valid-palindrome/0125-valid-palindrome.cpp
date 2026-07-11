class Solution {
public:
    bool isPalindrome(string s) {
    
        string filtered ="";
        for(char ch : s){
            if(isalnum(ch)){
                filtered += tolower(ch);
                
            }
        }
        bool ans=true;
        for(int i=0; i<filtered.size()/2; i++){
            if(filtered[i] != filtered[filtered.size()-i-1]){
                ans=false;
                break;
            }
            ans=true;
        }
         return ans;
    }
};