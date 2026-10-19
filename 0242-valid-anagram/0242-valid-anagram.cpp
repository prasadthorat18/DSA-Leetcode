class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int mapS[256] = {0};
        int mapT[256] = {0};

        for(int i=0; i<s.size(); i++){
            char a = s[i];
            char b = t[i];

            mapS[a]++;
            mapT[b]++;
        }
        
        for(int i=0; i<256; i++){
            if(mapS[i] != mapT[i]){
                return false;
            }
        }
        return true;
    }
};