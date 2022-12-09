class Solution {
public:
    char repeatedCharacter(string s) {
        string temp="";
        for(int i=0; i<s.length(); i++){
            
            for(int j=0; j<temp.length(); j++){
                if(s[i]==temp[j]){
                    return s[i];
                }
            }
            temp+=s[i];
        }
        return s[0];
    }
};