class Solution {
public:
    char repeatedCharacter(string s) {
        
        for(int i=0; i<s.length(); i++){
            
            for(int j=0; j<i; j++){
                if(s[i]==s[j]){
                    return s[i];
                }
            }
            
        }
        return s[0];
    }
};