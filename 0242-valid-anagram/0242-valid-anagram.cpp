class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> m;
        for(char x:s){
            m[x]++;
        }
        for(char x:t){
            m[x]--;
            if(m[x]<0){
                return false;
            }
        }
        return true;
        
    }
};