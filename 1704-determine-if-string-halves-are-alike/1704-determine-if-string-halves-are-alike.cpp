class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0, b=0;
        for(int i=0; i<s.size()/2; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i'||s[i]=='o' || s[i]=='u' ||                    s[i]=='A' || s[i]=='E' || s[i]=='I'||s[i]=='O' || s[i]=='U')
            {
                a++;
            }
        }
        for(int j=s.size()/2; j<s.size(); j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' ||                s[j]=='A' || s[j]=='E' || s[j]=='I' ||s[j]=='O' || s[j]=='U')
            {
                b++;
            }
        }
        return a==b;
        
    }
};