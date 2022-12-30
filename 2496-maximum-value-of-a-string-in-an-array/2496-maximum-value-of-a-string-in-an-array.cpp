class Solution {
public:
    int findValue(string s){
        int r = 0, i = 0;
        while(i < s.size()){
            if(s[i] < '0' || s[i] > '9') return s.size();
            r = r * 10 + s[i++] - '0';
        }
        return r;
    }
    
    int maximumValue(vector<string>& strs) {
        int ans = 0;
        for(auto s: strs) ans = max(ans, findValue(s));
        return ans;
    }
};
