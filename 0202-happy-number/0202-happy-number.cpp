class Solution {
public:
    bool isHappy(int n) {
        if(n==1)return true;
        if(n==89)return false;
        string s;
        stringstream ss;
        ss<<n;
        ss>>s;
         int ans=0;
        for(int i=0;i<s.length();i++){
           ans+=(s[i]-'0')*(s[i]-'0'); 
        }
        return  isHappy(ans);
    }
};