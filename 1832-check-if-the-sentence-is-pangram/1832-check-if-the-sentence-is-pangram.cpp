class Solution {
public:
    bool checkIfPangram(string s) {

        vector<int> ans(26,0);
        int index = 0;
        while(index < s.size()){
            ans[s[index]-'a']++;
            index++;
        }

        for(int i=0; i<26; i++){
            if(ans[i] == 0) return false;
        }
        return true;
        
    }
};