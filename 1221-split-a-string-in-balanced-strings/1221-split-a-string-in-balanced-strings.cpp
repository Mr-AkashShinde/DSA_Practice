class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0;
        int numR=0;
        int numL=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='R'){
                numR++;
            }
            else{
                numL++;
            }
            if(numR == numL){
                res++;
            }
        }
        return res;
    }
};