class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size() != t.size()) return false;

        int mapS[256] = {0};
        int mapT[256] = {0};

        for(int i=0; i<s.size(); i++){

            char a = s[i];
            char b = t[i];

            if(mapS[a] != mapT[b]){
                return false;
            }

            mapS[a] = i+1;
            mapT[b] = i+1;
        }
        return true;
    }
};