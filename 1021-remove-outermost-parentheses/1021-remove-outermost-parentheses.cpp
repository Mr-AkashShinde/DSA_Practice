class Solution {
public:
    string removeOuterParentheses(string s) {
        // string ss="";
        // vector<string>ss;
        int counter=0;
        int firstIndex=0;
        for(int i=0; i<s.length(); i++){
            if(counter==0) firstIndex=i;
            if(s[i]=='(' ){
                counter++;
            }
            if(s[i]==')' ){
                counter--;
            }
            if(counter==0) {
                s.erase(i,1);
                s.erase(firstIndex,1);
                i-=2;
            }
        }
        
        return s;
    }
};