class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words){
        int ret = words.size();
        set <char> s(allowed.begin(), allowed.end());
        for(int i = 0; i < words.size(); i++){
            vector<char> ch(words[i].begin(), words[i].end());
            for(int j = 0; j < ch.size(); j++){
                if(s.count(ch[j]) == 0){
                    ret -= 1;
                    break;
                }
            }
        }
        return ret;
    }
};