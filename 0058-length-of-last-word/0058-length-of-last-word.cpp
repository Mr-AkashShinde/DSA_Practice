class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int x=s.size()-1;
        for(int i= x; i>=0; i--){
            if(s[i] == ' ' && count > 0){
                return count;
            }
            if(s[i] != ' '){
                count++;
            }
        }
        return count;
    }
};